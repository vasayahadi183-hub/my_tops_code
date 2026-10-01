#include<stdio.h>
void main()
{
  int choice;
  char team[20];
     while (1)


     {  
        printf("1.view your team\n2.add new team\n3.exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

       if (choice == 1)
       {
          printf(" 1.rcb\n2.mi\n3.csk\n");

        }
        else if (choice == 2)
        {
          printf("Enter your team name: ");
          scanf("%s", team);
          printf("Your team name is: %s\n", team);
        }
        else if (choice == 3)
        {
          printf("Exiting the program\n");
          break;
        }
    
        else
        {
          printf("Invalid choice\n");
        }
    }
     
  

}