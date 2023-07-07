#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "terminal_module.h"
#include "server_module.h"

unsigned char* index;

/*char name[][20]={"salma hossam","sara hossam","jana hossam","ahmed hossam"};

char pan[][11]={"ASD23HJ3IO","KLP87BF6RF","PLM61GY2WE","TRQ90GA5BC"};

char *accounts[2]={name,pan};*/

char transaction [members][100]={ {"Dear Salma ,the last transaction you made was a cash withdrawal of 4000"},
                         {"Dear Sarah ,the last transaction you made was a cash withdrawal of 5000"},
                         {"Dear Jana  ,the last transaction you made was a cash withdrawal of 6000"},
                         {"Dear Ahmed ,the last transaction you made was a cash withdrawal of 7000"}
                      };
accounts cust[members]={{"SALMA HOSSAM","ASD23HJ3IO"},
                        {"SARA HOSSAM","KLP87BF6RF"},
                        {"JANA HOSSAM","PLM61GY2WE"},
                        {"AHMED HOSSAM","TRQ90GA5BC"}};


/*void isValidAccount (void)
{
    unsigned char x=0;
    for(int i=0;i<4;i++)
    {
        if(!strcmp((name+i),HolderName))
        {
            if(!strcmp((pan+i),PAN))
            {
                printf("Valid account\n");
                index=transaction[i];
                isAmountAvailable();
                x=1;
                break;
            }
        }
    }
    if(x==0)
    {printf("Invalid card\n");}
}*/

void isValidAccount (void)
{
    unsigned char x=0;
    for(int i=0;i<members;i++)
    {
        if(!strcmp(cust[i].name,HolderName))
        {
            if(!strcmp(cust[i].pan,PAN))
            {
                printf("Valid account\n**************\n");
                index=transaction[i];
                isAmountAvailable();
                x=1;
                break;
            }
        }
    }
    if(x==0)
    {printf("Invalid card\n");}
}



void isAmountAvailable(void)
{
    if(server_mon>=amount)
    {
        printf("**********your request is done**********\n");
        SaveTransaction();
    }
    else{printf("Sorry ,Declined Insuffecient funds\n");}
}
void SaveTransaction (void)
{
    char buffer [11];
    itoa(amount,buffer,10);
    strcpy(index+67,buffer);
    printf("%s\n*",index);
}


