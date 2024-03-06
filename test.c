#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    float hours;
    float overtime, total;
    
    printf("Input your full name:\n");
    scanf("%s", &name);
    printf("Input total hours worked:\n");
    scanf("%f", &hours);
    
    printf("\nPayment details for %s\n============\n", name);
    if(hours > 40){
        overtime = (hours - 40) * 150;
        printf("Overtime pay is %.2f\n", overtime);
    } else if(hours < 0){
        printf("Invalid number of hours\n");
    } else {
        overtime = 0;
        printf("no overtime pay\n");
    }
    
    total = hours * 150.00;
    printf("Total pay is %.2f", total);
    return 0;
}