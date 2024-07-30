#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("You are a baby.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a teenager.\n");
    } else if (age >= 20 && age <= 40) {
        printf("You are a youth.\n");
    } else if (age >= 41 && age <= 60) {
        printf("You are an adult.\n");
    } else {
        printf("You are an elder.\n");
    }

    return 0;
}
