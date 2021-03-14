#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char word[100],rev_word[100];

    gets(word);
    len=strlen(word);

    for(i=0,j=len-1;i<len;i++,j--)
    {
        rev_word[i]=word[j];
    }
    rev_word[i]='\0';

    printf("%s\n",rev_word);

    if(strcmp(word,rev_word)==0)
    {
        printf("%s is palindrome\n",rev_word);
    }
    else
    {
        printf("%s is not palindrome\n",rev_word);
    }
    return 0;
}
