#include<stdio.h>

void main()
{
    int like,share,comments;
        printf("enter total like");
        scanf("%d",&like);
        printf("enter total comments");
        scanf("%d",&comments);
        printf("enter total share");
        scanf("%d",&share);
        

        if (like>=1000 || comments>=500 && share>=50)
        {
            printf("post is trending");

        }
        else   
        {
            printf("post is not trending");
        }
        
}