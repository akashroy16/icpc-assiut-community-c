#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char s[1000005];
int cost[26];
 
int main() {
    if (scanf("%s", s) != 1) return 0;
 
    for (int i = 0; i < 26; i++) {
        scanf("%d", &cost[i]);
    }
 
    int n = strlen(s);
 
    for (int i = 0; i < n; ) {
        if (s[i] == '?') {
            int start = i;
            while (i < n && s[i] == '?') {
                i++;
            }
            int end = i - 1;
 
            if (start == 0 && end == n - 1) {
                for (int j = 0; j < n; j++) {
                    s[j] = 'a';
                }
            } else if (start == 0) {
                char right_char = s[end + 1];
                int min_diff = 2e9;
                char best_char = 'a';
                for (char c = 'a'; c <= 'z'; c++) {
                    int current_diff = abs(cost[c - 'a'] - cost[right_char - 'a']);
                    if (current_diff < min_diff) {
                        min_diff = current_diff;
                        best_char = c;
                    }
                }
                for (int j = start; j <= end; j++) {
                    s[j] = best_char;
                }
            } else if (end == n - 1) {
                char left_char = s[start - 1];
                int min_diff = 2e9;
                char best_char = 'a';
                for (char c = 'a'; c <= 'z'; c++) {
                    int current_diff = abs(cost[c - 'a'] - cost[left_char - 'a']);
                    if (current_diff < min_diff) {
                        min_diff = current_diff;
                        best_char = c;
                    }
                }
                for (int j = start; j <= end; j++) {
                    s[j] = best_char;
                }
            } else {
                char left_char = s[start - 1];
                char right_char = s[end + 1];
 
                int min_diff = 2e9;
                char best_char = 'a';
 
                for (char c = 'a'; c <= 'z'; c++) {
                    int current_diff = abs(cost[c - 'a'] - cost[left_char - 'a']) + abs(cost[c - 'a'] - cost[right_char - 'a']);
                    if (current_diff < min_diff) {
                        min_diff = current_diff;
                        best_char = c;
                    }
                }
 
                for (int j = start; j <= end; j++) {
                    s[j] = best_char;
                }
            }
        } else {
            i++;
        }
    }
 
    long long total_cost = 0;
    for (int i = 0; i < n - 1; i++) {
        total_cost += abs(cost[s[i] - 'a'] - cost[s[i + 1] - 'a']);
    }
 
    printf("%lld\n%s\n", total_cost, s);
 
    return 0;
}
