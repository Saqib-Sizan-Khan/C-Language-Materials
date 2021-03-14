#include<stdio.h>
int main()
{
    int choice;
    float area,r,l,w,b,h,m;
    printf("Input 1 for area of circle\n");
    printf("Input 2 for area of rectangle\n");
    printf("Input 3 for area of triangle\n");
    printf("Input 4 for area of square\n");
    printf("Input the choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Input the radius:");
        scanf("%f",&r);
        area=3.14*r*r;
    }
    else if(choice==2)
    {
        printf("Input the length & width:");
        scanf("%f%f",&l,&w);
        area=l*w;
    }
    else if(choice==3)
    {
        printf("Input the height & base:");
        scanf("%f%f",&h,&b);
        area=.5*h*b;
    }
    else if(choice==4)
    {
        printf("Input the measurement:");
        scanf("%f",&m);
        area=m*m;
    }
    else
    {
        printf("invalid choice");
    }
    printf("The area is: %.2f",area);
    return 0;
}
