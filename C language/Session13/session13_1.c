#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char song[70] = {"tum hi ho\n, ishq\n, channa mereya\n"};
    fp = fopen("playlist.txt","w");

    if(fp == NULL)
    {
        printf("invalid file");

    }
    else
    {
        printf("file created successfully");
        printf("songs  : %s\n", song);
        

     
    }

    fclose(fp);
}