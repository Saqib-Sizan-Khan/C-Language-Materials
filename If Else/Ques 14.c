#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Input Triangle sides");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3)
    {
        printf("This is an Equilateral Triangle");
    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("This is an Isosceles Triangle");
    }
    else
    {
         printf("This is an Scalene Triangle");
    }
    return 0;
}
