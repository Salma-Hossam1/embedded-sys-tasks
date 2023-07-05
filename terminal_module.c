#include <stdio.h>
#include <stdlib.h>
#include "terminal_module.h"
#include "card_module.h"
#include "server_module.h"

//unsigned int *ptr;
unsigned int amount ;


void GettransactionDate (expiration_d *New)
{
    printf("Enter transaction date : ");
    scanf("%i",&(New -> day));
    scanf("%i",&(New -> month));
    scanf("%i",&(New -> year));
}

void isCardExpired (void)
{
    if(obj.year > obj2.year)
    {
        printf("The card is not expired\n");
        GetTransactionAmount();
        isExceddedAmount();
    }
    else if(obj.year == obj2.year)
    {
        if(obj.month > obj2.month)
        {
            printf("The card is not expired\n");
            GetTransactionAmount();
            isExceddedAmount();
        }
        else if(obj.month == obj2.month)
        {
            if(obj.day >= obj2.day)
            {
                printf("The card is not expired\n");
                GetTransactionAmount();
                isExceddedAmount();
            }
            else{printf("The card is expired\n");}
        }
        else{printf("The card is expired\n");}
    }
    else{printf("The card is expired\n");}
}

void GetTransactionAmount(void)
{
    printf("Enter Transaction amount : ");
    scanf("%i",&amount);
}
void isExceddedAmount(void)
{
    if(amount <= my_mon)
    {
        isValidAccount();
    }
    else
    {
        printf("Declined Amount Exceeding limit\n");
    }
}
