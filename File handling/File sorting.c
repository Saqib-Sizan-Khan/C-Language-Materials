#include<stdio.h>

int main()
{
    FILE *fp;
    int c[80],i=0,num,j,temp,count;

    fp=fopen("number.txt","r");

    while(!feof(fp))
    {
        fscanf(fp, "%d", &num);
        c[i] = num;
        i++;
    }

    count=i;

    for(i=0; i<count; i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n\n");

    for(i=0; i<count; i++)
    {
        for(j=0; j<count; j++)
        {
            if(c[j+1] < c[j])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }

    for(i=0; i<count; i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n");

    return 0;
}
