#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 natural number:\n");

    for(i=1;i<=10;i++)
    {

        printf("%d\n",i);
        sum=sum+i;
    }
     printf("the sum is:%d\n",sum);
    return 0;
}
