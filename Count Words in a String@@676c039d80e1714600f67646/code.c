#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, count = 0, inWord = 0;

    fgets(str, sizeof(str), stdin);  
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && inWord == 0) {
            inWord = 1;
            count++;
        } else if (isspace(str[i])) {
            inWord = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}