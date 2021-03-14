#include<stdio.h>
int main()
{
    int p,n;
    printf("Input for calculation:");
    scanf("%d",&n);

    for(p=1; p<=10; p++)
    {
        printf("%d*%d= %d\n",n,p,(p*n));
    }
    return 0;
}
