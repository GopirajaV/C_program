#include<stdio.h>
#include<conio.h>
void main()
{
  char a[100],b[100];
  int i=0;
  clrscr();
  printf("Enter the first string :");
  scanf("%s",&a);
  printf("Enter the second string :");
  scanf("%s",&b);
  while(a[i] == b[i])
  {
    if(a[i]=='\0' || b[i] == '\0')
    {
      break;
    }
    i++;
  }
  if(a[i] == '\0' && b[i] =='\0')
    printf("Entered strings are equal.\n");
  else
    printf("Entered strings are not equal.\n");
  getch();
}
