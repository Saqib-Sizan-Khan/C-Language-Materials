#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Alphabet:");
    scanf("%c",&ch);

    switch(ch)
    {
    case'a':
    case'A':
    case'e':
    case'E':
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
        printf("vowel");
        break;
        default:printf("consonant");
    }
    return 0;
}
