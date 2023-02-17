#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main()
{
    char arr1[50];
    char arr2[50];
    char arr3[100];
    printf("Enter the first : ");
    gets(arr1);
    printf("Enter the second : ");
    gets(arr2);
    strcat(arr1," ");
    strcat(arr1,arr2);
    strcpy(arr3,arr1);
    printf("The final string is %s",arr3);
    return 0;
}