#include<stdio.h>
void main()
{
    int cricketscore[3][2]= {{150,100},
                                {200,199},
                                {120,120}};
    int index;
    for(index=0;index<=2;index++)
    {
        if (cricketscore[index][0]>cricketscore[index][1])
        {
            printf("match %d highest score%d\n",index+1,cricketscore[index][0]);
        }
        else if (cricketscore[index][0]<cricketscore[index][1])
        {
            printf("match %d highest score%d\n",index+1,cricketscore[index][1]);
        }
        else
        {
            printf("match is a tie\n");
        }
        
    }

}