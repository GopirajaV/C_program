#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],n,i;
  float avg,sum = 0;
  clrscr();
  printf("Enter no of elements in array :");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum += a[i];
  }
  avg = sum/n;
  printf("The average of array : %0.2f",avg);
  getch();
}
