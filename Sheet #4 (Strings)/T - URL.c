#include <stdio.h>
#include <string.h>
 
int main() {
    char s[10005];
    fgets(s, sizeof(s), stdin);
 
    char *username = strstr(s, "username=") + strlen("username=");
    char *pwd = strstr(s, "pwd=") + strlen("pwd=");
    char *profile = strstr(s, "profile=") + strlen("profile=");
    char *role = strstr(s, "role=") + strlen("role=");
    char *key = strstr(s, "key=") + strlen("key=");
 
    char *endUsername = strchr(username, '&');
    char *endPwd = strchr(pwd, '&');
    char *endProfile = strchr(profile, '&');
    char *endRole = strchr(role, '&');
    char *endKey = strchr(key, '\n');
 
    if (endKey == NULL) {
      endKey = strchr(key, '\0');
    }
 
    if (endUsername != NULL) {
        *endUsername = '\0';
    }
    if (endPwd != NULL) {
        *endPwd = '\0';
    }
    if (endProfile != NULL) {
        *endProfile = '\0';
    }
    if (endRole != NULL) {
        *endRole = '\0';
    }
    if (endKey != NULL) {
        *endKey = '\0';
    }
 
    printf("username: %s\n", username);
    printf("pwd: %s\n", pwd);
    printf("profile: %s\n", profile);
    printf("role: %s\n", role);
    printf("key: %s\n", key);
 
    return 0;
}
