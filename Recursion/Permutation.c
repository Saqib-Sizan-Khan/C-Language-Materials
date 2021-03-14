
///Permutation recursion code

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int permutation(int a,int b)
{
    return factorial(a)/factorial(a-b);
}

int main()
{
    int n,r;

    scanf("%d %d",&n,&r);

    printf("%dp%d = %d\n",n,r,permutation(n,r));

    return 0;
}
