#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount, rate, time, interest;

    do {
        printf("\n--- Bank Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Simple Interest\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Money deposited\n");
                printf("Balance = %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Money withdrawn\n");
                    printf("Balance = %.2f\n", balance);
                } else
                    printf("Insufficient balance\n");
                break;

            case 4:
                printf("Enter principal amount: ");
                scanf("%f", &amount);
                printf("Enter rate: ");
                scanf("%f", &rate);
              printf("enter time:");
              scanf("%f", &time); 
                interest = amount * rate / 100;
                printf("Simple Interest = %.2f\n",
