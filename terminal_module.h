
#ifndef TERMINAL_MODULE_H_INCLUDED
#define TERMINAL_MODULE_H_INCLUDED
#define my_mon 2000000
#include "card_module.h"
#include <dos.h>

extern unsigned int amount;

typedef struct{
    unsigned char day;
    unsigned char month;
    unsigned short year;
}transaction_d;

transaction_d obj2;


void GettransactionDate (transaction_d *ptr);
void isCardExpired (void);
void GetTransactionAmount(void);
void isExceddedAmount(void);


#endif // TERMINAL_MODULE_H_INCLUDED
