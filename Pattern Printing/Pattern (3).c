#include<stdio.h>
int main()
{
    int s,n,sum=0;
    printf("Enter their terms:\n");
    scanf("%d",&n);

    printf("The natural numbers are:\n");

    for(s=1; s<=n; s++)
    {
        printf("%d\n",s);
        sum=sum+s;

    }
    printf("The result: %d\n",sum);

    return 0;
}
