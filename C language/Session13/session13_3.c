#include<stdio.h>
#include<stdlib.h>
void main()
{   
    FILE *fp;
    char song1[70] ;
    char song2[70] ;
    fp = fopen("playlist.txt","r");

    if(fp == NULL)
    {
        printf("invalid file");

    }
    else
    {
        printf("entewr the song:");
        fgets(song1, 70, stdin);
        fprintf(fp, "%s", song1);

        printf("entewr the song:");
        fgets(song2, 70, stdin);
        fprintf(fp, "%s", song2);
    }
    fclose(fp);
}