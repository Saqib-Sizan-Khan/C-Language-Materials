#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the grade:");
    scanf("%c",&grade);

     if(grade=='E')
     {
         printf("Excelent");
     }
     else if(grade=='V')
     {
         printf("Very Good");
     }
     else if(grade=='G')
     {
         printf("Good");
     }
     else if(grade=='A')
     {
         printf("Average");
     }
     else if(grade=='F')
     {
         printf("Fail");
     }
     else
     {
         printf("Illegal grade");
     }

    return 0;
}
