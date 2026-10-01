#include<stdio.h>
void main()
{
    int sum=0;
    int amount []={2323,5252,6565,8989,3333,556,6640};
    int index,avg;

    for(index=0;index<=6;index++)
    {
        sum=sum+amount[index];
    }
    printf("sum=%d\n",sum);
    avg=sum/index;
    printf("avg=%d\n",avg);

}