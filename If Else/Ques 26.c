#include<stdio.h>
int main()
{
    int choice,p,q,result;
    printf("Input 1 for Coalescence\n");
    printf("Input 2 for Deduction\n");
    printf("Input 3 for Multiplication\n");
    printf("Input 4 for Division\n");
    printf("Input the choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
          printf("Input the value for operation:");
          scanf("%d%d",&p,&q);
        result=p+q;
    }
    else if(choice==2)
    {
          printf("Input the value for operation:");
          scanf("%d%d",&p,&q);
        result=p-q;
    }
    else if(choice==3)
    {
          printf("Input the value for operation:");
          scanf("%d%d",&p,&q);
        result=p*q;
    }
    else if(choice==4)
    {
          printf("Input the value for operation:");
          scanf("%d%d",&p,&q);
        result=p/q;
    }
    else
    {
        printf("invalid choice");
    }
    printf("The result is: %d",result);
    return 0;
}
