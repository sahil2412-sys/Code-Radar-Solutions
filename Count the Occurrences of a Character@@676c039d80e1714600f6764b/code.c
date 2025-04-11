#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int count = 0;

    // Input the string
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Input the character to count
    scanf("%c", &ch);

    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);
    return 0;
}