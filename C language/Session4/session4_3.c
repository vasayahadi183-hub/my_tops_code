#include<stdio.h>
void main()
{
int age,totalordervalue;
printf("enter age of user");
scanf("%d",&age);
printf("enter totalordervalue");
scanf("%d",&totalordervalue);

    if(age>=18&&totalordervalue>500)
    {
        printf("true");
    }       
    
    else
    {
    printf("false");
    }
}