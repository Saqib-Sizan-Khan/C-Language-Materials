#include<stdio.h>
int main()
{
    char op;
    float a,b,c,sum;
    printf("Input the operation:");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
    {
        scanf("%f%f%f",&a,&b,&c);
        sum=a+b+c;
    }
    break;
    case '*':
    {
        scanf("%f%f%f",&a,&b,&c);
        sum=a*b*c;
    }
    break;
    default:
        printf("error");
    }
    printf("Result=%f",sum);
    return 0;
}
