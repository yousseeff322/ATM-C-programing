#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
typedef struct {
int expiryDay ;
int expiryMonths ;
int expiryYear ;
}ExpiryDate ;

typedef struct {
    char holderName[100];
    ExpiryDate expiryDate;
    char PAN[20];
} Card;

void getCardHolderName(Card* card) ;
void getCardExpiryDate(Card* card) ;
void getCardPAN(Card* card) ;







#endif // CARD_H_INCLUDED
