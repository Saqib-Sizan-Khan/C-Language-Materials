#include<stdio.h>
int main()
{
    int i,a[100],b,j=0;

    scanf("%d",&b);

    for(i=0;b>0;i++)
    {
        a[i]=b%2;
        b/=2;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}
