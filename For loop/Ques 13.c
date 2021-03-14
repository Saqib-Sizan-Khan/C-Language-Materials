#include<stdio.h>
int main()
{
    int i,n,oe,sum=0;
    float avg=0;
    printf("Even:1\nOdd:2\n");
    printf("Enter the terms:");

    scanf("%d",&n);
    scanf("%d",&oe);
    printf("the numbers are :\n");

    for(i=0; i<=n; i++)
    {
        switch(oe)
        {
        case 1:
        {
            if(i%2==0)
            {
                printf("%d\n",i);
                sum+=i;
                avg=sum/i;
            }
        }
        break;
        case 2:
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
                sum+=i;
                avg=sum/i;
            }
        }
        }
    }
    printf("The average result: %f",avg);

    return 0;
}


