#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include "card.h"
#include "terminal.h"

typedef struct {
    int  accountNumber ;
    float balance;
} Account;


// Function prototype for getAccountNumber
void getAccountNumber(Account* account);

// Function prototype for isValidAccount
bool isValidAccount(Account* account);

// Function prototype for setBalance
void setBalance(Account* account, float balance);

// Function prototype for isAmountAvailable
bool isAmountAvailable(Account* account, Terminal* terminal);

// Function prototype for updateAccountBalance
void updateAccountBalance(Account* account, Terminal* terminal);

// Function prototype for saveTransaction
void saveTransaction(const Terminal* terminal, Account* account);








#endif // SERVER_H_INCLUDED
