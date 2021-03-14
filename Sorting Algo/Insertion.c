#include<stdio.h>

int main()
{
    int l[100],n;

    scanf("%d",&n);

    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }

    for(i=1;i<n;i++)
    {
        int item = l[i];

        j=i-1;

        while(j>=0 && l[j]>item)
        {
            l[j+1] = l[j];
            j--;
        }

        l[j+1] = item;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
}
