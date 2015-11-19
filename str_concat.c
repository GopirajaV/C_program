#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i=0,j=0;
clrscr();
printf("Enter the first string :");
scanf("%s",&a);
printf("Enter the second string :");
scanf("%s",&b);
while(a[i] != '\0')
i++;
while(b[j] != '\0')
{
a[i] = b[j];
i++;
j++;
}
a[i] = '\0';
printf("\n The concated String is %s ",a);
getch();
}
