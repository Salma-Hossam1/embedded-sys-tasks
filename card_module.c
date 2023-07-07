#include <stdio.h>
#include <stdlib.h>
#include "card_module.h"


char HolderName[20];
char PAN [11];



void GetExpirationDate (expiration_d *New)
{
    printf("Enter Expiration date :\t");
    scanf("%i",&(New -> day));
    scanf("%i",&(New -> month));
    scanf("%i",&(New -> year));
}
void getCardHolderName (void)
{
    printf("Enter the holder name :\t");
    gets(HolderName);
    for(unsigned char i=0;i<20;i++)
    {
        HolderName[i]=toupper(HolderName[i]);
    }
}
unsigned char getCardPAN (void)
{
    unsigned char k=1;
    pan :
    printf("Enter the card PAN :\t");
    fgets(PAN,11,stdin);
    for(int i=0;i<10;i++)
    {
        if(PAN[i]=='\0')
        {
            while(k<=2)
           {
               printf("Enter PAN completely\n");
               k++;
               goto pan;
           }

        }
        else
        {
            PAN[i]=toupper(PAN[i]);
            if(k==3 && (i==9)){k=4;}
        }
    }
    return k;
}
