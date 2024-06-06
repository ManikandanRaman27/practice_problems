//octal to decimal
#include <stdio.h>

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, placeValue = 1, remainder;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;

        if (remainder == 0) {
        } else if (remainder == 1) {
            decimalNumber += 1 * placeValue;
        } else if (remainder == 2) {
            decimalNumber += 2 * placeValue;
        } else if (remainder == 3) {
            decimalNumber += 3 * placeValue;
        } else if (remainder == 4) {
            decimalNumber += 4 * placeValue;
        } else if (remainder == 5) {
            decimalNumber += 5 * placeValue;
        } else if (remainder == 6) {
            decimalNumber += 6 * placeValue;
        } else if (remainder == 7) {
            decimalNumber += 7 * placeValue;
        }

        placeValue *= 8;
    }

    return decimalNumber;
}

int main() {
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    int decimalNumber = octalToDecimal(octalNumber);

    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
