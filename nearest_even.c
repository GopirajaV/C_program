#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num%2==0)
  {
      printf("%d",num);
  }
  else
  printf("%d",num-1);
  return 0;
}
