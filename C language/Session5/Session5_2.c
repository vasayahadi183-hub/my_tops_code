#include<stdio.h>
void main()
{

    int a;
    printf("1.breakfast\n2.lunch\n3snacks\n4.dinner\n");
    printf("enter the number",a);
    scanf("%d", &a);
    
    switch(a)
    {
        case 1:
        printf("samosa ");
        break;
        case 2:
        printf("biryani");
        break;
        case 3:
        printf("pav bhaji");
        break;
        case 4:
        printf("panner");
        break;
        default:
        printf("food not found");
    }
}