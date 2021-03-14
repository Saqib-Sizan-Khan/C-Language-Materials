#include <stdio.h>
int main()
{
    char str1[30],str2[30];
    int i;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    for(i=0;str1[i] == str2[i] && str1[i] != '\0';i++);

    if(str1[i] == str2[i])printf("Both strings are equal");
    else if(str1[i] < str2[i])printf("String 1 is small");
    else if(str1[i] > str2[i])printf("String 2 is small");

    return 0;
}

