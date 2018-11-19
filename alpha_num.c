#include<stdio.h>
int main()
{
  char a[1000];
  int i,num=0, alpha=0,non = 0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='!'&& a[i]<='~')
    {
        if(a[i]>='0' && a[i]<='9')
          num = 1;
        else
        alpha = 1;
    }
    else
        non=1;
  }
  if(num ==1 &&alpha ==1 && non ==0)
      printf("Yes");
    else
    printf("No");
  return 0;
}
