#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],b[n],c[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }

    /*for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }*/

    return 0;
}
