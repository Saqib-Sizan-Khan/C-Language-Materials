
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10],str3[20];
    int i,j,k,len1,len2;

    gets(str1);
    gets(str2);

    len1=strlen(str1);
    len2=strlen(str2);

    for(i=0,j=0;i<len1;i++,j++)
    {
        str3[j]=str1[i];
    }
    for(i=0;i<len2;i++,j++)
    {
        str3[j]=str2[i];
    }

    str3[j]='\0';

    printf("%s\n",str3);
    return 0;
}

