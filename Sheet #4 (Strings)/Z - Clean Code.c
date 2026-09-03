#include <stdio.h>
#include <string.h>

char buffer[100000];
int buf_len = 0;

int main() {
    char line[1000];
    int in_block_comment = 0;

    while (fgets(line, sizeof(line), stdin)) {
        int i = 0;

        while (line[i] != '\0') {
            if (in_block_comment) {
                if (line[i] == '*' && line[i + 1] == '/') {
                    in_block_comment = 0;
                    i += 2;
                } else {
                    i++;
                }
            } else {
                if (line[i] == '/' && line[i + 1] == '/') {
                    break;
                } else if (line[i] == '/' && line[i + 1] == '*') {
                    in_block_comment = 1;
                    i += 2;
                } else {
                    if (line[i] != '\n' && line[i] != '\r') {
                        buffer[buf_len++] = line[i];
                    }
                    i++;
                }
            }
        }

        if (!in_block_comment) {
            int has_non_space = 0;
            for (int k = 0; k < buf_len; k++) {
                if (buffer[k] != ' ' && buffer[k] != '\t') {
                    has_non_space = 1;
                    break;
                }
            }

            if (has_non_space) {
                buffer[buf_len] = '\0';
                printf("%s\n", buffer);
            }

            buf_len = 0;
        }
    }

    return 0;
}
