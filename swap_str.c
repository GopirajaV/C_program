#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
     char str[30],temp;
     int i,n;
     clrscr();
     printf("\nEnter the string : ");
     gets(str);
     n=strlen(str);
     for(i=0;i<n;i=i+2)
     {
     temp = str[i];
     str[i] = str[i+1];
     str[i+1] = temp;
     }
     printf("\nSwapped string     : %s",str);
     getch();
}
