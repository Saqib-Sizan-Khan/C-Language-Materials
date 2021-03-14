#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before reverse:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nafter reverse:\n");

    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
return 0;
}
