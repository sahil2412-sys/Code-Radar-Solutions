#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    // Input two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    // Compare character frequencies
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}