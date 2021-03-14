#include<stdio.h>
int main()
{
    int customer_id;
    char customer_name[10];
    printf("Customer id:",customer_id);
    scanf("%d",&customer_id);
    printf("Customer name:",customer_name);
    scanf("%s",&customer_name);

    int unit;
    float amt,total_amt,surcharge;
    printf("Enter total unit consumed by user:");
    scanf("%d",&unit);

    if(unit<=199)
    {
        amt=199*1.20;
    }
    else if(unit>=200 && unit<=400)
    {
        amt=200*1.50;
    }
    else if(unit>=400 && unit<=600)
    {
        amt=200*1.80;
    }
    else
    {
        amt=600*2.00;
    }
    surcharge=amt*.15;
    total_amt=amt+surcharge;

    printf("Customer ID:%d\n",customer_id);
    printf("Customer Name:%s\n",customer_name);
    printf("Unit consumed:%d\n",unit);
    printf("Total amount:%.2f\n",total_amt);
   return 0;
}
