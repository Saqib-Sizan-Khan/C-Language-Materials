#include<stdio.h>
int main()
{
    int p,l,amt;
    printf("Enter cost prize:");
    scanf("%d",&p);
    printf("Enter sell prize:");
    scanf("%d",&l);

    if(p>l)
    {
        amt=p-l;
        printf("You can booked your profit amount:%d",amt);
    }
    else if(p<l)
    {
        amt=l-p;
        printf("You can booked your loss amount:%d",amt);
    }
    else
    {
        printf("No profit No loss");
    }
    return 0;
}
