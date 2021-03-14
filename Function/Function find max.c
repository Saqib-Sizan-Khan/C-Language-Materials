#include<stdio.h>
int find_max(int ara[],int n);

int main()
{
    int ara[]={-14,45,0,23,22,83,89,-87,3,98};
    int n=11;
    int max = find_max(ara,n);
    printf("%d\n",max);
}
int find_max(int ara[],int n)
{
    int max=ara[0];
    int i;

    for(i=1;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}

