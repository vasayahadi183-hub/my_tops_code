#include<stdio.h>
void main()
{
    printf("1.mi\n2.csk\n3.rcb\n4.gt\n");
    int num;
    printf("select the team:");
    scanf("%d",&num);
    
    if(num==1)
    {
        printf("go go mumbai");
        
    }

    else if(num==2)
    {
        printf("csk is king");
    }
    else if(num==3)
    {
        printf("rcb always on top");
    }
else if (num==4)
{
    printf("aava de");
}
else
{
    printf("team not found");

}    

}