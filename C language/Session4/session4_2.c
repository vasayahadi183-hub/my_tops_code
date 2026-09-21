#include<stdio.h>
#include<stdbool.h>
void main()
{
    float price,discount,finalprice;

    printf("enter the price of item ");
    scanf("%f",&price);

    printf("enter the discount of item ");
    scanf("%f",&discount);

    float discountamount=price*discount/100;
    printf("discount amount:%f\n",discountamount);
    
    finalprice=price-discountamount;
    printf("final price:%f\n",finalprice);

    bool is_member;
    printf("enter 1 if member or 0 if not member ");
    scanf("%d",&is_member);

    float extradiscount =finalprice*5/100*is_member;
    printf("extradiscount:%f\n100",extradiscount);

    printf("final amount after extrea discount:%.f",finalprice-extradiscount);



}