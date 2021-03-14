#include<stdio.h>
#include<string.h>
int string_compare(char a[],char b[])
{
    int i;

    for(i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
        if(a[i]<b[i])
        {
            return -1;
        }
        if(a[i]>b[i])
        {
            return 1;
        }
    }
    if(strlen(a) < strlen(b))
    {
        return -1;
    }
    if(strlen(a) > strlen(b))
    {
        return 1;
    }
    if(strlen(a) == strlen(b))
    {
        return 0;
    }
}
int main()
{
    char x[30];
    char y[30];
    int result;

    gets(x);
    gets(y);

    result = string_compare(x,y);

    printf("%d\n",result);

    if(result==1)
    {
        printf("first string is large\n");
    }
    else if(result==0)
    {
        printf("both string are equal\n");
    }
    else
    {
        printf("second string is large\n");
    }

    return 0;
}
