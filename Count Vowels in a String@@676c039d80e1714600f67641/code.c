#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;

    scanf("%s", str);  // Read the input string

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);  // Convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d", count);  // Output the count of vowels
    return 0;
}