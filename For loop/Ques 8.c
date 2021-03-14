#include<stdio.h>
int main()
{
    int a,b,x,rows;
    printf("Input the rows:");
    scanf("%d",&rows);

    for(a=1; a<=rows; a++)
    {
        x=5;
        for(b=a; b<=rows; b++)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}

