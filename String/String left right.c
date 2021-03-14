#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int n,i,x,len;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s",&str);
        len=strlen(str);

        for(i=0;i<len;i++)
        {
            if(str[i]=='L')
            {
                str[i]=str[i-1];
            }
            if(str[i]=='R')
            {
                str[i]=str[i+1];
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
