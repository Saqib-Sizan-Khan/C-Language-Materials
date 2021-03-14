#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    printf("x=%d,y=%d\n",x,y);

    y=x^y;
    x=x^y;
    y=x^y;

    printf("x=%d,y=%d\n",x,y);

    return 0;
}
