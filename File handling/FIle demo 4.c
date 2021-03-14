#include<stdio.h>
int main()
{
    FILE *file;
    char ch[10];
    int i=0;

    file = fopen("Sizan.txt","r");

    if(file==NULL)
    {
        printf("File doesn't exits");
    }

    else
    {
        printf("File is open successfully\n");

        while(!feof(file))
        {
            fgets(ch,30,file);
            printf("%s",ch);
        }

        fclose(file);
    }
    return 0;
}
