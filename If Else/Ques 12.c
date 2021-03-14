#include<stdio.h>
int main()
{
    int r,p,c,ca,sum;
    char studentname[10];

    printf("Enter student roll:\n",r);
    scanf("%d",&r);

    printf("Enter student name:\n",studentname);
    scanf("%s",&studentname);

    printf("Enter marks Physics,Chemistry,Computer Application:\n",p,c,ca);
    scanf("%d%d%d",&p,&c,&ca);

    sum=p+c+ca;
    if(sum>240)
    {
        printf("Roll:%d\n",r);
        printf("Student name:%s\n",studentname);
        printf("Total marks:%d\n",sum);
        printf("Percentage:80%\n");
        printf("First division\n");
    }
    else if(sum>180)
    {
        printf("Roll:%d\n",r);
        printf("Student name:%s\n",studentname);
        printf("Total marks:%d\n",sum);
        printf("Percentage:60%\n");
        printf("Second division\n");
    }
    else
    {
        printf("Roll:%d\n",r);
        printf("Student name:%s\n",studentname);
        printf("Total marks:%d\n",sum);
        printf("Percentage:40%\n");
        printf("Third division\n");
    }
    return 0;
}
