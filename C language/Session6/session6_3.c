#include<stdio.h>
void main()
{
    int guess;

    do
    {
         printf("guess the number\n");
         printf("1.tu\n2.piyagharaaya\n3.khat\n");
         printf("Enter the number\n");
         scanf("%d",&guess);



         if (guess==3)
         {
            printf("the song is correct\n");
            
         }
         else
         {

            printf("wrong song try again\n");

        }
         
    } while(guess!=3);
    
}