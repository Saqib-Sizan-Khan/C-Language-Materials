#include<stdio.h>
int main()
{
    int i,n,a[200],b[200];

    printf("Input the elements:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }

    return 0;
}
