#include<stdio.h>
int main()
{
    int i,n,element,pos;
    printf("Enter the element number:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the element to insert:\n");
    scanf("%d",&element);
    printf("Enter the position:\n");
    scanf("%d",&pos);

    for(i=n-1; i>=pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=element;
    n++;
    printf("after insertion:\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
