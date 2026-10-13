#include<stdio.h>
#include<stdlib.h>
void main()
{   
    FILE *fp;
    int i;
    char song[70] ;
    char match[50];
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
        for ( i = 0; song[i] != '\0'; i++)
        {
            match[50] = song[i];
            if (match[50] == "tum")
            {
                printf("%s", song);
            }
        }
        
    }
}
}