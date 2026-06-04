#include <stdio.h>

int balance = 5000;

void deposit() {
    int amt;
    printf("Enter Amount: ");
    scanf("%d", &amt);

    balance += amt;
    printf("After Deposit: %d\n", balance);
}

void withdraw() {
    int amt;

    printf("Enter Amount: ");
    scanf("%d", &amt);

    if (amt <= balance) {
        balance -= amt;
        printf("After Withdrawal: %d\n", balance);
    } else {
        printf("Insufficient Balance\n");
    }
}

void showbalance() {
    printf("Balance = %d\n", balance);
}

int main() {
    int choice;

    printf("===== BANK MANAGEMENT SYSTEM =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Show Balance\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        case 3:
            showbalance();
            break;

        case 4:
            printf("Thank You\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
