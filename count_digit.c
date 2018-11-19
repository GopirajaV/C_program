#include<stdio.h>
int main()
{
  int num,count=0;
  scanf("%d",&num);
  while(num)
  {
      num=num/10;
      count+=1;
  }
    printf("%d ",count);
  return 0;
}
