#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        printf("This is an Alphabet");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("This is a Digit");
    }
    else
    {
        printf("this is a special character");
    }

    return 0;
}
