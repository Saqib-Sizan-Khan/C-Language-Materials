#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet:");
    scanf("%c",&ch);
    printf("Alphabet from %c to Z:\n",ch);

    while(ch<='z' || ch<='Z')
    {
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}
