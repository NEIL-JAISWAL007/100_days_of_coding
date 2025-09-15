/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/#include <stdio.h>
int main()
{
    int num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    return 0;
}
