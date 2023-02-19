#include <stdio.h>
#include <stdlib.h>
#include "string.h"
double calcArea(double r);
const float pi =3.14;
int main()
{
    double r;
    printf("Enter the radius\n");
    scanf("%lf",&r);
    printf("The radius is %lf ",calcArea(r));
    return 0;
}
double calcArea(double r)
{
    return pi*r*r;
}