#include <stdio.h>
// SIMPLE CALCULATOR USING SWITCH STATEMENT

int main()
{
    int num1, num2, operation;
    printf("Options: \n1 -> add\n2 -> subtract\n3 -> product\n4 -> division\n5 -> remainder\n");
    printf("Enter a number (1-5): ");
    scanf("%d", &operation);
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    switch (operation)
    {
    case 1:
        printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
        break;

    case 2:
        printf("The diference between %d and %d is %d", num1, num2, num1 - num2);
        break;

    case 3:
        printf("The product of %d and %d is %d", num1, num2, num1 * num2);
        break;

    case 4:
        printf("The division of %d and %d is %d", num1, num2, num1 / num2);
        break;

    case 5:
        printf("The modulo of %d and %d is %d", num1, num2, num1 % num2);
        break;

    default:
        break;
    }
}