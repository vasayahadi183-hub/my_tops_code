#include<stdio.h>
#include<stdlib.h>
void main()
{   
    FILE *fp;

    char song[70] ;
    fp = fopen("playlist.txt","r");

    if(fp == NULL)
    {
        printf("invalid file");

    }
    else
    {
        printf("file  opened successfully");
        
        
    
    while(fgets(song, 70, fp) != NULL)
    {
        printf("%s", song);
    }
    fclose(fp);
}
}