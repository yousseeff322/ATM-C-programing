#include "server.h"
#include <stdio.h>
#include <stdbool.h>


void getAccountNumber(Account* account) {
    printf("Enter account number: ");
    scanf("%d", &(account->accountNumber));
}
bool isValidAccount(Account* account) {
    if (account->accountNumber >= 1111 && account->accountNumber <= 5555) {
        return true; // Account is valid
    }

    return false; // Account is not valid
}





void setBlance(Account* account , float balance) {
    account->balance = balance;
}


bool isAmountAvailable(Account* account , Terminal* terminal) {
    if (terminal->transactionAmount <= account->balance) {
        return true; // Amount is available
    }

    return false; // Amount is not available
}
void updateAccountBalance(Account* account,  Terminal* terminal) {
       account->balance -= terminal->transactionAmount;

}

void saveTransaction(const Terminal* terminal , Account* account  ) {
    printf("Transaction saved:\n");
    printf("Date: %d / %d / %d \n", terminal->transactionDate.transactionDay, terminal->transactionDate.transactionMonths, terminal->transactionDate.transactionYear);
    printf("Amount: %f\n", terminal->transactionAmount);
    printf("Updated balance: %f\n", account->balance);


}





