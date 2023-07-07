#ifndef SERVER_MODULE_H_INCLUDED
#define SERVER_MODULE_H_INCLUDED
#define server_mon 100000
#define members 4

void isValidAccount (void);
void isAmountAvailable(void);
void SaveTransaction (void);
extern unsigned char* index;


typedef struct{
    char name [20];
    char pan [11];
}accounts;

#endif // SERVER_MODULE_H_INCLUDED
