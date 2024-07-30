#include <stdio.h>

int main()
{
    int i = 1, num;

    printf("Input Number: ");
    scanf("%d", &num);
    printf("====================\n");

    while (i <= 12)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}