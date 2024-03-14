#include <stdio.h>

int sumOfScores()
{
    int score, i = 1, sum = 0;

    printf("Input 5 scores: ");

    while (i <= 5)
    {
        scanf("%d", &score);
        sum += score;
        i++;
    }
    return sum;
}

int sumOfEvenNos()
{
    int i = 1, sum = 0;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        
        i++;
    }
    return sum;
}

int main()
{
    // int scores = sumOfScores();
    // printf("The sum of scores is %d\n", scores);
    int evenNos = sumOfEvenNos();
    printf("The sum of Even Numbers from 1 to 100 is %d\n", evenNos);
    return 0;
}