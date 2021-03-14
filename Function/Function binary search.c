#include<stdio.h>

int search(int ara[],int high,int low,int num,int mid)
{
    while(low<=high)
    {
        mid=(low+high)/2;

        if(num==ara[mid])
        {
            break;
        }
        if(num<ara[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return num;
    return mid;
    return ara[mid];
}
int main()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low=0,high=15,num,mid;
    int number,mid_index,x;
    scanf("%d",&num);

    number=search(ara,high,low,num,mid);
    mid_index=search(ara,high,low,num,mid);
    x=ara[mid];

      if(low>high)
    {
        printf("%d not in the array\n",num);
    }
    else
    {
        printf("%d in the array.It is the %d th element of the array.\n",ara[mid],mid);
    }
    return 0;
}
