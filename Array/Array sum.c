#include<stdio.h>
int main()
{
    int i,n,a[100],sum=0;

    printf("Input the Elements number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nelement %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\nTotal=%d",sum);

    return 0;
}
