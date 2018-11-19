#include<stdio.h>
#define mul(a,b) (a*b)
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  if(mul(a,b)%2==0)
  {
      printf("even");
  }
  else
  printf("odd");
  return 0;
}
