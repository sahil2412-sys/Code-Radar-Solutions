#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[1000], subStr[100];

    // Read the main string
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; // Remove newline

    // Read the substring
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; // Remove newline

    // Check if substring exists in main string
    if (strstr(mainStr, subStr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}