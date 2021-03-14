#include<stdio.h>
int main()
{
    int j,i,n;
    printf("Input the limit of Multiplication:");
    scanf("%d",&n);
    printf("Multiplication from 1 to :%d\n",n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d*%d=\t%d\n",j,i,j*i);
    }
    return 0;
}
