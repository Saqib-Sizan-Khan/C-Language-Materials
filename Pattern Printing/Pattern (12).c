#include<stdio.h>
int main()
{
    int s,t,rows,k=1;
    printf("Input the rows:");
    scanf("%d",&rows);

    for(s=1;s<=rows;s++)
    {
        for(t=1;t<=s;t++)
            printf("%d",k++);
            printf("\n");
    }
    return 0;
}
