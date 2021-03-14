#include<stdio.h>
int main()
{
    int i,n,oe;
    printf("Even:1\nOdd:2\n");
    printf("Enter the terms:");

    scanf("%d",&n);
    scanf("%d",&oe);

    for(i=0; i<=n; i++)
    {
        switch(oe)
        {
        case 1:
        {
            if(i%2==0)
            printf("%d\n",i);
        }
        break;
        case 2:
        {
            if(i%2!=0)
            printf("%d\n",i);
        }
        }
    }
    return 0;
}
