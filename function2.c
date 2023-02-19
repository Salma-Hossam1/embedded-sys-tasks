#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int findLargest(int arr[],int n);
int main()
{
    int n;
    printf("the size of array is : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&n);
    int array [n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The maximum value is %d ",findLargest(array,n));
    return 0;
}
int findLargest(int arr[],int n)
{
   int max_value = arr[0];
   for(int i=0;i<n;i++)
   {
       if(arr[i]>max_value)
        max_value = arr[i];
   }
     return max_value;
}
