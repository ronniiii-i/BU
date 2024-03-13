#include <stdio.h>

// Function to input user data
void inputUserData()
{
    char name[100];
    char dept[100];
    int appId;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your department: ");
    fgets(dept, sizeof(dept), stdin);

    printf("Enter your application ID: ");
    scanf("%d", &appId);

    printf("Name: %s", name);
    printf("Dept: %s", dept);
    printf("App ID: %d\n", appId);
}

// Function to print the data without prompting for input
void printData()
{
    printf("Name: Egbu Princess Roni\n");
    printf("Dept: Software Engineering\n");
    printf("App ID: 162059");
}

int main()
{
    inputUserData();
    printData();
    return 0;
}