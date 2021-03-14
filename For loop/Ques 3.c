#include<stdio.h>
int main()
{
    int t1=0,t2=1,nt,i,n;
    printf("Enter the terms:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("%d\n",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return 0;
}
