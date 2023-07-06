#include "card.h"
#include <stdio.h>
#include <stdbool.h>

void getCardHolderName(Card* card) {
    printf("Enter card holder name: ");
    scanf("%s", card->holderName);
}

void getCardExpiryDate(Card* card) {
    printf("Enter card expiry date (day/month/year): ");
    scanf("%d/%d/%d", &card->expiryDate.expiryDay, &card->expiryDate.expiryMonths, &card->expiryDate.expiryYear);
}

void getCardPAN(Card* card) {
    printf("Enter card PAN: ");
    scanf("%s", card->PAN);
}
