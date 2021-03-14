#include<stdio.h>
int main()
{
    char in;
    printf("Enter an Alphabet:");
    scanf("%c",&in);

    if(in=='a'|| in=='e'|| in=='i'|| in=='o'|| in=='u'||in=='A'|| in=='E'|| in=='I'|| in=='O'|| in=='U')
    {
        printf("The alphabet is vowel");
    }
    else
    {
        printf("The alphabet is consonant");
    }
    return 0;
}
