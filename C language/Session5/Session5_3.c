#include<stdio.h>
void main()
{
    int a,b,discount;
    printf("enter total usercartamount");
    scanf("%d", &a);
    if(a>=1000) 
    {
        if(a>=2000)
        {
            discount=(a*20)/100;
            b= a-discount;
        printf(" final price %d\n",discount);
        printf(" final price with discount %d",b);
        }
        else
        {
            discount=(a*10)/100;
            b= a-discount;
            printf("final price %d\n",discount);
            printf("final price with  discount%d",b);
        }

    }
    else
    {
        printf(" final price%d",a);

    }
    
}