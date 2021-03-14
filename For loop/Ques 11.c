#include<stdio.h>
int main()
{
    int a,b,rows;
    printf("Input the rows:");
    scanf("%d",&rows);

    for(a=1; a<=rows; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=1; a<=rows; a++)
    {
        for(b=a; b<=rows; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


