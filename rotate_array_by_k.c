#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[30],new_arr[30];
  int  a=0,n, i, k;
  clrscr();
  printf("Enter the Value of n:");
  scanf("%d", &n);
  printf("\n Enter the value of k:");
  scanf("%d", &k);
  printf("\n Enter the elements of array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  while(a<k)
  {
    for(i=0;i<n-1;i++)
    {
      new_arr[i+1]=arr[i];
    }
    new_arr[0]=arr[n-1];
    for(i=0;i<n;i++)
    {
      arr[i]=new_arr[i];
    }
    a++;
  }
  printf("\nThe rotated array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",new_arr[i]);
  }
  getch();
}
