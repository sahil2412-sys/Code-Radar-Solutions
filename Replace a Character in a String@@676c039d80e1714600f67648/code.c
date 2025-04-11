#include <stdio.h>

int main() {
    char str[1000];
    char oldChar, newChar;
    int i;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Input character to replace
    scanf(" %c", &oldChar);

    // Input replacement character
    scanf(" %c", &newChar);

    // Replace occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    // Output modified string
    printf("%s", str);

    return 0;
}