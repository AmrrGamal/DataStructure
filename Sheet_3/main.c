#include <stdio.h>
#include <stdlib.h>
#include "Global.h"
#include "Stack.h"
 #include "Queue.h"

void display (car c )
{
     printf("car model is : %d \n car name is : %s \n",c.model, c.name );

}
int main()
{
    car c ;  //object from sturct
    Queue data;
    Stack s ;
    createqueue(&data);
    createstack(&s);


    while(1)
    {
        printf("\n choose one operation :\n");
        printf(" 1==> add new customer \n");
        printf(" 2==> serve a customer\n ");
        printf(" 3==> display customer information \n");
        printf(" 4==> display customer information in most recent order\n ");
        printf(" 5==> exist menu\n ");
        int select ;
        scanf("%d",&select);
        system("cls");
        if (select==1)
        {
            printf("enter model :\n");
            scanf("%d",&c.model);
            printf("enter name :\n");
            scanf("%s",&c.name);
            append(c ,&data);
            push(c ,&s);

        }
        else if(select==2)
        {
            while(!isempty(&data))
            {
                printf("the customer served is :\n");
                serve(&c,&data);
                printf("car model is %d \n car name is %s \n", c.model, c.name );
            }


        }
        else if (select==3)
        {
            traversequeue(&data,&display);
        }
        else if(select==4)
        {

            traversestack(&s,&display);

        }
        else if (select==5)
        {
            return 0;
        }
    }





}





