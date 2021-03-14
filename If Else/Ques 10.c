#include<stdio.h>
int main()
{
    int Math,Phy,Chem,sum;
    printf("Enter subject marks:");
    scanf("%d%d%d",&Math,&Phy,&Chem);
    sum=Math+Phy+Chem;
    if(Math>=65 && Phy>=55 && Chem>=50 && sum>=180 || sum>=140)
    {
        printf("The candidate is eligible for admission");
    }
    else
    {
        printf("The candidate is not eligible for admission");

    }
    return 0;
}
