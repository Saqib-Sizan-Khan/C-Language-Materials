#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,m;
    char str[10];

    while(1)
    {
        printf("Please Enter your number: ");
        scanf("%d",&n);

        if(n==0)
            break;

        printf("Enter which shift you want(Left or Right): ");
        scanf("%s",str);

        if(strcmp(str,"Left")==0)
        {
            printf("How many bits you want to left shift: ");
            scanf("%d",&x);
            m= n << x;
        }

        if(strcmp(str,"Right")==0)
        {
            printf("How many bits you want to Right shift: ");
            scanf("%d",&x);
            m= n >> x;
        }

        printf("Result is : %d\n",m);
    }
    return 0;
}

