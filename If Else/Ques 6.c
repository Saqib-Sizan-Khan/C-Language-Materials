#include<stdio.h>
int main()
{
    int m;
    printf("Enter value:");
    scanf("%d",&m);
    if(m>0)
    {
        printf("n=1");
    }
    else if(m<0)
    {
        printf("n=-1");
    }
    else
    {
        printf("n=0");
    }
    return 0;
}
