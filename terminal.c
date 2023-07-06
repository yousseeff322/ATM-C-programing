#include "terminal.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void getTransactionDate(Terminal* terminal) {
    printf("Enter transaction date (day/month/year): ");
    scanf("%d/%d/%d", &terminal->transactionDate.transactionDay, &terminal->transactionDate.transactionMonths, &terminal->transactionDate.transactionYear);
}
bool isCardExpired(const ExpiryDate* expiryDate, const TransactionDate* transactionDate) {
    // Compare the expiry date with the transaction date
    if (expiryDate->expiryYear < transactionDate->transactionYear) {
        return true; // Card has expired
    } else if (expiryDate->expiryYear == transactionDate->transactionYear) {
        if (expiryDate->expiryMonths < transactionDate->transactionMonths) {
            return true; // Card has expired
        } else if (expiryDate->expiryMonths == transactionDate->transactionMonths) {
            if (expiryDate->expiryDay < transactionDate->transactionDay) {
                return true; // Card has expired
            }
        }
    }

    return false; // Card is not expired
}



void getTransactionAmount(Terminal* terminal) {
    printf("Enter transaction amount: ");
    scanf("%f", &(terminal->transactionAmount));
}

bool isBelowMaxAmount(const Terminal* terminal) {
    return terminal->transactionAmount <= terminal->maxAmount;
}


