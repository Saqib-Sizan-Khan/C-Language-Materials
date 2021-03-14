#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the integer");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("1st number is the greatest among them");
    }
    else if(b>a && b>c)
    {
        printf("2nd number is the greatest among them");
    }
    else
    {
        printf("3rd number is the greatest among them");

    }
  return 0;
}
