#include<stdio.h>
void main(  )
{

    int followercount = 100;

    
    


    printf("before pre increment value is %d\n",followercount);
    
    // ++followercount;

    printf("after pre increment value%d\n",++followercount);

    printf("after  increment value is %d\n",followercount);

    followercount = 100;

    printf("before  increment value%d\n",followercount);

    printf("post increment value%d\n",followercount++);
    // followercount++;

    printf("post increment value%d\n",followercount);




}