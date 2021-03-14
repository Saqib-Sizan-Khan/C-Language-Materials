#include<stdio.h>
int main()
{
    int p,q,rows,a=1;
    printf("Input the rows:");
    scanf("%d",&rows);

    for(p=1;p<=rows;p++)
    {
        for(q=1;q<=p;q++)
        {
            printf("%d ",a);
            a++;
        }

            printf("\n");
    }
    return 0;
}
