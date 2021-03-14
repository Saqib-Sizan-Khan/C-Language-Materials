#include<math.h>
int main()
{
    int i,n;
    printf("Enter the terms:");
    scanf("%d",&n);
    printf("No\tSquare\tCube\tSqrt\n");

    for(i=1; i<=n; i++)
    {
        printf("%d\t%d\t%d\t%.2lf\n",i,i*i,i*i*i,sqrt((double)i));
    }
    return 0;
}
