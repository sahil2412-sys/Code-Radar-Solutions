#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    char *word_start = NULL;
    char *ptr = str;

    while (*ptr) {
        if (word_start == NULL && !isspace(*ptr)) {
            word_start = ptr;
        }

        if (word_start && (isspace(*ptr) || *(ptr + 1) == '\0')) {
            char *word_end = (isspace(*ptr)) ? ptr - 1 : ptr;
            reverse(word_start, word_end);
            word_start = NULL;
        }

        ptr++;
    }

    printf("%s\n", str);
    return 0;
}