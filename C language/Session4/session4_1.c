#include<stdio.h>
void main()
{

    int itemprice,quntity;

    printf("enter the price of item ");
    scanf("%d",&itemprice);

    printf("enter the quntity of item ");
    scanf("%d",&quntity);
    int total;
    total=itemprice*quntity;

    printf("total bill amount:%d\n",total);
}