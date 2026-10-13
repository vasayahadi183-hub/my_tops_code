#include<stdio.h>
void main()

{
 int likes=1000;
 int *ptrlikes=&likes;

 printf("value of :%d\n",*ptrlikes);
 printf("address of:%d\n",ptrlikes);


}