#include<stdio.h>
int main()
{
    int mn,md;
    printf("Enter month days 31 or 30 or 28: ");
    scanf("%d",&md);
    printf("Enter month number\n if odd input(1-14)\n if even input(1-8)\n if 28 press any key\n: ");
    scanf("%d",&mn);

    switch(md)
    {
    case 31:
    {
        switch(mn)
        {
        case 1:
            printf("The month is January & it have 31 days");
            break;
        case 3:
            printf("The month is March & it have 31 days");
            break;
        case 5:
            printf("The month is May & it have 31 days");
            break;
        case 7:
            printf("The month is July & it have 31 days");
            break;
        case 9:
            printf("The month is August & it have 31 days");
            break;
        case 11:
            printf("The month is October & it have 31 days");
            break;
        case 13:
            printf("The month is December & it have 31 days");
            break;
        }
    }
    break;
    case 30:
    {
        switch(mn)
        {
        case 2:
            printf("The month is April & it have 30 days");
            break;
        case 4:
            printf("The month is June & it have 30 days");
            break;
        case 6:
            printf("The month is September & it have 30 days");
            break;
        case 8:
            printf("The month is November & it have 30 days");
            break;
        }
    }
    break;
    case 28:
        printf("This month is February & it have 28 or 29 days");
        break;
    default:
        printf("error");
    }
    return 0;
}
