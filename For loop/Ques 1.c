#include<stdio.h>
int main()
{
    int i,n,N=0;
    printf("Enter the terms:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
       i+=4;
       printf("%d\n",i);
    }
    return 0;
}
