#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main()
{
    int arr[5] = {1,2,3,4,5};
    int sum =0;
    float avg;
    for (int i=0;i<5;i++)
    {
        printf("Elment %d is %d\n",i+1,arr[i]);
        sum+=arr[i];
    }
    avg = sum/5;
    printf("The summation of elements = %d",sum);
    printf("\nThe average of elements = %f",avg);
    return 0;
}
