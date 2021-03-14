#include<stdio.h>
int main()
{
    char c,m,d,all;

    printf("Calculator: c\nMonth: m\nDay: d\n:");
    scanf("%c",&all);

    switch(all)
    {
    case 'c':
    {
        char cal;
        int n1,n2,sum;
        printf("summation: +\ndeduction: -\nmultiplication: *\ndivision: /\n:");
        scanf(" %c",&cal);

        switch(cal)
        {

        case '+':
        {
            printf("Input two integers:");
            scanf("%d%d",&n1,&n2);
            sum=n1+n2;
        }
        break;
        case '-':
        {
            printf("Input two integers:");
            scanf("%d%d",&n1,&n2);
            sum=n1-n2;
        }
        break;
        case '*':
        {
            printf("Input two integers:");
            scanf("%d%d",&n1,&n2);
            sum=n1*n2;
        }
        break;
        case '/':
        {
            printf("Input two integers:");
            scanf("%d%d",&n1,&n2);
            sum=n1/n2;
        }
         printf("Result=%d",sum);
        }

    }
    }
    return 0;
}
