//octal to binary numbers
#include <stdio.h>
long long octalToBinary(int octalNumber) {
    int remainder;
    long long binaryNumber = 0, base = 1;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;

        if (remainder == 0) {
            binaryNumber += 0 * base;
        } else if (remainder == 1) {
            binaryNumber += 1 * base;
        } else if (remainder == 2) {
            binaryNumber += 10 * base;
        } else if (remainder == 3) {
            binaryNumber += 11 * base;
        } else if (remainder == 4) {
            binaryNumber += 100 * base;
        } else if (remainder == 5) {
            binaryNumber += 101 * base;
        } else if (remainder == 6) {
            binaryNumber += 110 * base;
        } else if (remainder == 7) {
            binaryNumber += 111 * base;
        }

        base *= 1000;
    }

    return binaryNumber;
}

int main() {
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    if (octalNumber < 0) {
        printf("Invalid octal number!\n");
        return 1;
    }
    long long binaryNumber = octalToBinary(octalNumber);

    printf("Binary equivalent: %lld\n", binaryNumber);

    return 0;
}
