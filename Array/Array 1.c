#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("Input 10 elements:");

    for(i=0; i<10; i++)
    {
        printf("\n%d.press any number: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe Array is: \n");

    for(i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
