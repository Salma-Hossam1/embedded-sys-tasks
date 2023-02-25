#include <stdio.h>


enum Category {FOOD,DRINK,TOILETRIES,CLOTHING};

union ProductInfo
{
    float floatValue;
    int intValue;
};

struct Product
{
    char name [50];
    float price ;
    int stock;
    enum Category category;
    union ProductInfo info;
};
void Print (struct Product x)
{
    if(x.category == FOOD)
        printf("Category: FOOD ");
    else if (x.category == DRINK)
        printf("Category: DRINK ");
    else if (x.category == TOILETRIES)
        printf("Category: TOILETRIES ");
    else if (x.category == CLOTHING)
        printf("Category: CLOTHING ");
    else

      printf("Category: Not found");
    printf("Product name: %s , Price: %f, Stock: %d , info : %f",x.name,x.price,x.stock,x.info.floatValue);
}

int main()
{
    struct Product x[3];
    for (int i=0;i<3;i++)
    {
        printf("Enter the name of product %d ",i+1);
        scanf("%s",&x[i].name);
        fflush(stdout);fflush(stdin);
        printf("Enter the price of product %d ",i+1);
        scanf("%f",&x[i].price);
        fflush(stdout);fflush(stdin);
        printf("Enter the stock of product %d ",i+1);
        scanf("%d",&x[i].stock);
        fflush(stdout);fflush(stdin);
        printf("Enter the category of product %d ..food :0..drink:1..toiletries:2 .. clothing:3 ",i+1);
        scanf("%d",&x[i].category);
        fflush(stdout);fflush(stdin);
        printf("If there are additional info (size or weight),enter it here %d ",i+1);
        scanf("%f",&x[i].info.floatValue);
        fflush(stdout);fflush(stdin);
        Print(x[i]);
        printf("\n");


    }
    return 0;

}s