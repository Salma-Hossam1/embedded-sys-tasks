#include <stdio.h>
#include <stdlib.h>
#include "terminal_module.h"
#include "card_module.h"
#include "server_module.h"
#include <time.h>
//unsigned int *ptr;
unsigned int amount ;


void GettransactionDate (transaction_d *ptr)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ptr->day = tm.tm_mday;
    ptr->month = tm.tm_mon+1;
    ptr->year = tm.tm_year+1900;
    printf("Transaction date is : \t");
    printf("%i/%i/%i\n",(ptr -> day),(ptr -> month),(ptr -> year));
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
