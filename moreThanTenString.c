


#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char s[101]; // Maximum string length is 100, plus 1 for the null terminator
        scanf("%s", s);

        int len = strlen(s);
        if (len > 10) {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("%s\n", s);
        }
    }

    return 0;
}
