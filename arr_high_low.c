#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],n,i,temp,less;
  clrscr();
  printf("Enter no of elements in array :");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  temp = a[0];
  less = a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>temp)
    {
      temp = a[i];
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<less)
    {
      less = a[i];
    }
  }
  printf("The highest element %d and the lowest element %d",temp,less);
  getch();
}
