#include <stdio.h>

int main() {
    int age, isCitizen;
    scanf("%d %d", &age, &isCitizen);

    if (age >= 18 && isCitizen == 1)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}