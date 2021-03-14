
///Recursion in combination code

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n,r,s;

    scanf("%d%d",&n,&r);

    s = combination(n,r);

    printf("%dc%d = %d",n,r,s);

    return 0;
}
