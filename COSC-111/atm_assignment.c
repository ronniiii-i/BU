#include <stdio.h>

int main()
{
    int pin = 1234; // sample pin
    int inputPin;
    float balance = 1000.0;

    printf("Welcome to the ATM\n");

    printf("Please enter your PIN: ");
    scanf("%d", &inputPin);

    if (inputPin == pin)
    {
        int option;
        char anotherTransaction;

        do
        {
            printf("\n1. Check Balance\n");
            printf("2. Withdraw\n");
            printf("3. Deposit\n");
            printf("4. Quit\n");

            printf("\nEnter your choice: ");
            scanf("%d", &option);

            if (option == 1)
            {
                printf("\nYour balance is $%.2f\n", balance);
            }
            else if (option == 2)
            {
                float amount;
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);

                if (amount > balance)
                {
                    printf("\nInsufficient funds\n");
                }
                else
                {
                    balance -= amount;
                    printf("\nWithdrawal successful. Remaining balance: $%.2f\n", balance);
                }
            }
            else if (option == 3)
            {
                float deposit;
                printf("\nEnter amount to deposit: $");
                scanf("%f", &deposit);
                balance += deposit;
                printf("\nDeposit successful. New balance: $%.2f\n", balance);
            }
            else if (option == 4)
            {
                printf("\nThank you for using the ATM\n");
                return 0;
            }
            else
            {
                printf("\nInvalid option\n");
            }

            // loop to handle any input that isn't y or n
            do
            {
                printf("\nDo you want to perform another transaction? (y/n): ");
                scanf(" %c", &anotherTransaction);

                if (anotherTransaction == 'n' || anotherTransaction == 'N')
                {
                    printf("\nThank you for using the ATM\n");
                }

                if (anotherTransaction != 'y' && anotherTransaction != 'Y' &&
                    anotherTransaction != 'n' && anotherTransaction != 'N')
                {
                    printf("\nInvalid input. Please enter 'y' or 'n'.\n");
                }

            } while (anotherTransaction != 'y' && anotherTransaction != 'Y' &&
                     anotherTransaction != 'n' && anotherTransaction != 'N');
        } while (anotherTransaction == 'y' || anotherTransaction == 'Y');
    }
    else
    {
        printf("\nIncorrect PIN. Please try again\n");
    }

    return 0;
}
