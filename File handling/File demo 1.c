#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]=" Aqib Khan";
    int len = strlen(name);
    int i;

    file= fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dosen't exist\n");
    }

    else
    {
        printf("File is opened\n");
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);
    }

    return 0;
}
