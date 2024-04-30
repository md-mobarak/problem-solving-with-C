#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100001]; // Maximum string length is 100000, plus 1 for the null terminator
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        // Replace comma with space
        if (S[i] == ',') {
            S[i] = ' ';
        }
        // Convert uppercase to lowercase and vice versa
        else if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        } else if (islower(S[i])) {
            S[i] = toupper(S[i]);
        }
    }

    printf("%s\n", S);

    return 0;
}


#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100001]; // Maximum string length is 100000, plus 1 for the null terminator
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        // Replace comma with space
        if (S[i] == ',') {
            S[i] = ' ';
        }
        // Convert uppercase to lowercase and vice versa
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;
        }
    }

    printf("%s\n", S);

    return 0;
}
