#include <stdio.h>
#include <stdlib.h>
#include <math.h>
enum enum1 {name,roll_num,maths,physics,chem};

struct Students
{
    char name [100];
    int roll_num ;
    enum enum1 cat;
    float maths;
    float physics;
    float chem;
};
void display(struct Students x)
{
    printf("Name is %s \n",x.name);
    fflush(stdin);fflush(stdout);
    printf("Roll number is %d \n",x.roll_num);
    fflush(stdin);fflush(stdout);
    printf("Maths degree is %f \n",x.maths);
    fflush(stdin);fflush(stdout);
    printf("Physics degree is %f \n",x.physics);
    fflush(stdin);fflush(stdout);
    printf("Chemistry degree is %f \n",x.chem);
    fflush(stdin);fflush(stdout);
    printf("************\n");
}

int main()
{
    int j,i=0;
    int k=0;
    struct Students x[100]={};;
   for(int u=0;u<100;u++)
   {
        x[u].roll_num=0;
   }
    while (1)
    {
    int choice;
    //int i=0;
    int en;
    printf("\nTo add new student record enter 1 \n , modify enter 2 \n ,delete enter 3 \n ,search enter 4 \n,and for display enter 5\n");
    fflush(stdout);
    scanf("%d",&choice);
    fflush(stdin);
    switch (choice)
    {
        case 1 :
        while(i>=0)
        {printf("Name : ");
        gets(x[i].name);
        printf("Roll num : ");
        scanf("%d",&x[i].roll_num);
        printf("Maths degree : ");
        scanf("%f",&x[i].maths);
        printf("Physics degree : ");
        scanf("%f",&x[i].physics);
        printf("Chemistry degree : ");
        scanf("%f",&x[i].chem);
        i++;
        break;
        }
        break;
        case 2 :
        printf("Enter your roll number ");
        scanf("%d",&en);
        for(j=0;j<100;j++)
        {
            if(x[j].roll_num==en)
            {
                printf("Enter the category you want to modify\n (name 0 - roll_num 1 - maths 2 - physics 3- chem 4)\n and your modification\n");
                scanf("%d",&x[j].cat);
                if(x[j].cat==name)
                gets(x[j].name);
                else if(x[j].cat==roll_num)
                scanf("%d",&x[j].roll_num);
                else if(x[j].cat==maths)
                scanf("%f",&x[j].maths);
                else if(x[j].cat==physics)
                scanf("%f",&x[j].physics);
                else if(x[j].cat==chem)
                scanf("%f",&x[j].chem);
            }
            else
            {
                printf("Invalid roll number\n");
            }
            break;
        }
        break;
        /*case 3:
        printf("Enter your roll number ");
        scanf("%d",&en);
        for(int j=0;j<100;j++)
        {
            if(x[j].roll_num==en)
            {
                x[j].name="0";
                x[j].roll_num=0;
                x[j].maths=0;
                x[j].physics=0;
                x[j].chem=0;

            }
            else
            {
                printf("Invalid roll number\n");
            }
            break;
        }
        break;*/
        case 4:
        printf("Enter your roll number ");
        scanf("%d",&en);
        for(int j=0;j<100;j++)
        {
            if(x[j].roll_num==en)
            display(x[j]);
            else
            {
                printf("Invalid roll number\n");
            }
            break;
        }
        break;
        case 5:
        while(k<100)
        {
            if(x[k].roll_num!=0)
               {
                 display(x[k]);
                    k++;
               }
               else
                break;
        }
        k=0;
        break;
    }
    printf("**************\n");
    }
}
