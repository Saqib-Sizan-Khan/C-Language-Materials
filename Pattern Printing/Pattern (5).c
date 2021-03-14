#include<stdio.h>
int main()
{
  int i,n;
  printf("Input the terms:");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
      printf("The number is :%d \t The cube of %d is :%d\n",i,i,(i*i*i));
  }
    return 0;
}
