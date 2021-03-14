#include<stdio.h>
int main()
{
    int number1,number2;
    printf("input two integers=",number1,number2);
    scanf("%d %d",&number1,&number2);

    if (number1==number2)
    {
        printf("number1 & number2 are equal");

    }
    else
    {
        printf("trey are not equal");
    }


    return 0;
}
