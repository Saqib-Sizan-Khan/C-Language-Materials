#include<stdio.h>
int main()
{
    int i,n,a[100];

    printf("Input the number of Array elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Element %d-\n",i);
        scanf("%d",&a[i]);
    }
    printf("The Array is:\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");
    printf("The reverse Array is:\n");

    for(i=n-1; i>=0; i--)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
