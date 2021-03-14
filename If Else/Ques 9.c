#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate point:",x,y);
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant",x,y);

    }
    else if(x<0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the Third quadrant",x,y);

    }
    else
    {
        printf("The coordinate point (%d,%d) lies in the Forth quadrant",x,y);

    }
    return 0;
}
