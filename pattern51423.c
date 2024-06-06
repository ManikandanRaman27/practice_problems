/*
5   1
 4 2
  3
 4 2
5   1
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // Print upper half
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = n; j > i; j--)
            printf(" ");

        // Decreasing numbers
        printf("%d", i);

        // Middle spaces
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
            printf(" ");

        // Print increasing numbers (except for the top and bottom rows)
        if (i != n)
            printf("%d", n - i + 1);

        printf("\n");
    }

    // Print lower half
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int j = n; j > i; j--)
            printf(" ");

        // Decreasing numbers
        printf("%d", i);

        // Middle spaces
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
            printf(" ");

        // Print increasing numbers
        if (i != n)
            printf("%d", n - i + 1);

        printf("\n");
    }

    return 0;
}
