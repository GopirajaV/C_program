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
    printf("%d",count);
  return 0;
}
