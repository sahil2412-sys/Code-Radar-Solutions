#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); // Read the string

    int len = strlen(str);

    // Print the string in reverse
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}