#include<stdio.h>
int main()
{   
    int n,k,i,count=0,temp;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp==k)
        {
            count+=1;
        }
    }
    if(count!=0)
    printf("Yes");
    else
    printf("No");
  return 0;
}
