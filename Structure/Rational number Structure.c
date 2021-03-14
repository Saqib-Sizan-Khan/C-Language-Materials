#include<stdio.h>

typedef struct
{
    double lob;
    double hor;
}rational;

double rational_sum(double a,double b)
{
    return a+b;
}

int main()
{
    double a,b,sum;
    rational value;

    printf("Enter lob & hor for First Rational number: ");
    scanf("%lf%lf",&value.lob,&value.hor);

    a=value.lob/value.hor;

    printf("Enter lob & hor for Second Rational number: ");
    scanf("%lf%lf",&value.lob,&value.hor);

    b=value.lob/value.hor;

    printf("a = %lf\nb = %lf\n",a,b);

    sum=rational_sum(a,b);

    printf("Sum = %lf\n",sum);

    return 0;
}
