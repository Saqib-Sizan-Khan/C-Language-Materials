#include<stdio.h>
int main()
{
    int i,j,n,k,spc=0;
    scanf("%d",&n);
    spc=n+4;
    for(k=spc-1; k>=1; k--)
    {
        printf(" ");
    }
    printf("*");

    for(i=1; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d*",j);
        }
        printf("\n");
        spc--;
    }
    return 0;
}
