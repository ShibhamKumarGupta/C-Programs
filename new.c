/*#include<stdio.h>
//Strong Numbers
int main()
{
  int n,num,m;
  long long fact,sum;
  printf("Enter the Limit upto which you wnat to print:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum=0;
    
    num=i;
    for(int j=1;num>0;j++)
    {
        fact=1ll;
       m=num%10;
       num=num/10;
       for(int k=1;k<=m;k++)
       {
        fact=fact*k;
       }
       sum=sum+fact;
    }
    if(sum==i)
    {
        printf("%d ",i);
    }
  }
  
  return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int n,sum=0,fact,m,t;
    
    printf("Enter the number to check:");
    scanf("%d",&n);
    t=n;
    for(int i=1;n>0;i++)
    {
        fact=1;
        
        m=n%10;
        
        for(int i=1;i<=m;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;

    }
    if(sum==t)
    {
        printf("yes %d is a Strong Number",t);
    }
    else {
        printf("%d is not a Strong Number",t);
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,sum=0,m,r;
    printf("Enter your number:");
    scanf("%d",&n);
    m=n;
    for(int i=1;n>0;i++)
    {
      n=n/10;
      count ++;
    }
    for(int i=1;n>0;i++)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(sum==m)
    {
        printf("%d is a Armstrong number",m);
    }
    else 
    {
        printf("%d is not an armstrong number",m);
    }
    return 0;

}