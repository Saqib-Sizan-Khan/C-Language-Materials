#include<stdio.h>
int main()
{
    char ch;
    printf("enter the char=",ch);
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a': printf("sizan");
        break;
        case 'b': printf("saqib");
        break;
        case 'c': printf("khan");
        break;
        case 'd': printf("Saqib Sizan Khan");
        break;
        default: printf("Student of UAP");

    }
    return 0;
}
