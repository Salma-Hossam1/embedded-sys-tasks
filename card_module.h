#ifndef CARD_MODULE_H_INCLUDED
#define CARD_MODULE_H_INCLUDED
extern char HolderName[20];
extern char PAN[11];
typedef struct{
    unsigned short year;
    unsigned char month;
    unsigned char day;
}expiration_d;
expiration_d obj;
void GetExpirationDate (expiration_d *New);
void getCardHolderName (void);
void getCardPAN (void);

#endif // CARD_MODULE_H_INCLUDED