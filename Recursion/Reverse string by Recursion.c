#include<stdio.h>

void rev(char *str)
{
    if(*str!=0)
    {
        rev(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char str[100];
    gets(str);

    rev(str);

    return 0;
}
