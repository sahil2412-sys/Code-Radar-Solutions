#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    // Read the entire line including spaces
    fgets(str, sizeof(str), stdin);

    while (1) {
        // If we reach space, newline, or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0'; // terminate the word
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
            if (str[i] == '\0' || str[i] == '\n') break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("%s\n", longest);
    return 0;
}