#ifndef TERMINAL_H_INCLUDED
#define TERMINAL_H_INCLUDED
#include "card.h"
#include <stdbool.h>


typedef struct {
int transactionDay ;
int transactionMonths ;
int transactionYear ;
}TransactionDate ;


typedef struct {
    TransactionDate transactionDate;
    float transactionAmount;
    float maxAmount;
} Terminal;



// Function prototype for getTransactionDate
void getTransactionDate(Terminal* terminal);

// Function prototype for isCardExpired
bool isCardExpired(const ExpiryDate* expiryDate, const TransactionDate* transactionDate);

// Function prototype for getTransactionAmount
void getTransactionAmount(Terminal* terminal);

// Function prototype for isBelowMaxAmount
bool isBelowMaxAmount(const Terminal* terminal);










#endif // TERMINAL_H_INCLUDED
