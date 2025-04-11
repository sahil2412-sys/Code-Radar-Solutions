#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // ASCII range
    int i, max = 0;
    char result;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n' && str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }

    // Find the most frequent character (alphabetically first in case of tie)
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("%c\n", result);
    return 0;
}