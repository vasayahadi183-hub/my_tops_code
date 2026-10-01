#include<stdio.h>
void main()
{
    int age;
    printf("enter user  age");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("elighble for car licenece");
    }
    else
    {
        printf("not elighble for licence");
    }
    if (age>=21)
    {
        printf("elighble for credit card");
    }
    else
    {
        printf("not elighble for credit card");
    }
    if (age>=25)
    {
        printf("elighble for voting");
    }
    else
    {
        printf("not elighble for voting");
    }
    

    
}