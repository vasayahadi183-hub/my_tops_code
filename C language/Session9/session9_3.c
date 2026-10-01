#include<stdio.h>
void main()
{
    int playlistrating[3][5]= {{1,2,3,4,5},
                                {6,7,8,9,10},
                                {11,12,13,14,15}};
    int index;
    for(index=0;index<=4;index++)
    {
        printf("playlist 2=%d\n",playlistrating[1][index]);
}

}