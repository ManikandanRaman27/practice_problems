//calculate some arithmetic operations in right to left order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

// Function to perform arithmetic operations
double performOperation(double operand1, double operand2, char operator) {
    switch(operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if(operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Error: Invalid operator\n");
            exit(EXIT_FAILURE);
    }
}

int main() {
    char expression[MAX_SIZE],buffer[16];
    printf("Enter the arithmetic expression: ");
    scanf("%s", expression);
    strcpy(buffer,expression);
    printf("%s\n",buffer);
    float result = 0.0;
    char *token;
    char temp[MAX_SIZE];
    strcpy(temp, expression);

    // Tokenizing based on operators
    token = strtok(temp, "+-*/");
    if (token != NULL) {
        result = atof(token); // Converting the first token to a number
    } else {
        printf("Invalid expression\n");
        return EXIT_FAILURE;
    }

    char operators[MAX_SIZE];
    int operatorCount = 0;

    // Storing operators in an array
    for (int i = 0; expression[i] != '\0'; ++i) {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            operators[operatorCount++] = expression[i];
        }
    }

    // Performing operations
    token = strtok(NULL, "+-*/");
    int operatorIndex = 0;
    while (token != NULL) {
        result = performOperation(result, atof(token), operators[operatorIndex++]);
        token = strtok(NULL, "+-*/");
    }

    // Storing the result in a string
    char resultString[MAX_SIZE];
    gcvt(result, 5, resultString);
    printf("Result: %s\n", resultString);

    return 0;
}
