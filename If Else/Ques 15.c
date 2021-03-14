#include<stdio.h>
int main()
{
    int a,b,c,ang;
    printf("Enter Triangle angles:");
    scanf("%d%d%d",&a,&b,&c);
    ang=a+b+c;
    if(ang==180)
    {
        printf("The Triangle is valid");
    }
    else
    {
        printf("The Triangle is not valid");
    }
    return 0;

}
