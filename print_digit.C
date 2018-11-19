#include<stdio.h>
int main()
{
  int num,temp,divider=1;
  scanf("%d",&num);
  temp=num;
  while(temp)
  {
      temp=temp/10;
      divider = divider*10;
  }
  while(divider>1)
  {
      divider = divider/10;
      printf("%d ",num/divider);
      num = num % divider;
  }
  return 0;
}
