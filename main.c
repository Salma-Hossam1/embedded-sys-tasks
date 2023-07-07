#include <stdio.h>
#include <stdlib.h>
#include "card_module.h"
#include "terminal_module.h"
#include "server_module.h"

void StartApp (void);
int main()
{

      StartApp ();


    return 0;
}
void StartApp (void)
{
    getCardHolderName();
   unsigned char k = getCardPAN ();
   if(k==3)
   {
       printf("please go to the nearest bank branch to solve the problem");
   }
   else
   {
       GetExpirationDate (&obj);
       GettransactionDate(&obj2);
       isCardExpired ();
   }

}
