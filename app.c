#include "card.h"
#include "terminal.h"
#include "server.h"
#include <stdbool.h>
#include <stdio.h>


void appStart() {
    Card card;
    getCardHolderName(&card);
    getCardExpiryDate(&card);
    getCardPAN(&card);
    Terminal terminal;
    getTransactionDate(&terminal);
    terminal.maxAmount =2000 ;

  if (isCardExpired(&card.expiryDate, &terminal.transactionDate)) {
    printf("Declined: Expired Card\n");
}
    else {


printf(" ************** be careful the maximum amount is 2000  *************** \n" ) ;
getTransactionAmount(&terminal);
        if (terminal.transactionAmount >terminal.maxAmount) {
    printf("Declined: Amount Exceeding Limit\n");
}


else {
 printf(" ***************** be careful the accounts range from 1111 to 5555  ************ \n" ) ;
         Account account ;
         account.balance = 5000.0;

    getAccountNumber(&account);

    if (!isValidAccount(&account)) {
        printf("Declined: Invalid Account\n");
        return;
    }
    else {
        if (!(isAmountAvailable(&account,&terminal ))) {

        printf("Declined: Insufficient Funds\n");

}

    else {
    printf(" ***************** your old Balance is 5000 ************ \n" ) ;
    updateAccountBalance(&account, &terminal);
        saveTransaction(&terminal , &account);
        printf("Transaction Approved\n");
    }

    }}}}
