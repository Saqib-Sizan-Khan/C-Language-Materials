#include <stdio.h>
int main()
{
    int i,j,k,spc;
    char n;

    scanf("%c",&n);
    spc=(n-65)+4;
    for(i='A'; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j='A'; j<=i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
        spc--;
    }
    return 0;
}
