#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Error: Cannot divide by zero!");
            break;

        case '%':
            if (num2 != 0)
                printf("Result = %d", num1 % num2);
            else
                printf("Error: Cannot divide by zero!");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}
