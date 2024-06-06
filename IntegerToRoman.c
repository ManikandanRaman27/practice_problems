//integer to roman letter convertion upto 999
#include <stdio.h>
void printRoman(int num) {
    if (num <= 0 || num > 999) {
        printf("Invalid input!\n");
        return;
    }

    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter an integer (1-999): ");
    scanf("%d", &num);

    printf("Roman numeral: ");
    printRoman(num);

    return 0;
}
