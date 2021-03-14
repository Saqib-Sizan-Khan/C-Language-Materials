#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c.Here a,b,c is coefficient of a quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("Root is imaginary");
    }
    else
    {
        printf("Root is real");
    }
    return 0;
}
