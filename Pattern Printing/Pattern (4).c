#include <stdio.h>
int main()
{
    int i,n,sum=0,N;
    float avg;
    printf("Input the terms:");
    scanf("%d",&N);
    printf("Input the 10 numbers : \n");
    for (i=1; i<=N; i++)
    {
        printf("Number-%d :",i);

        scanf("%d",&n);
        sum +=n;
    }
    avg=sum/N;

    printf("The sum of %d no is : %d\nThe Average is : %.2f\n",N,sum,avg);

}
