#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,count=0,sum=0,m;
    printf("Enter a number to check for armstrong:");
    scanf("%d",&n);
    t=n;
    for(int i=1;t>0;i++)
    {
      count++;
      t/=10;
    }
    t=n;
    for(int i=1;t>0;i++)
    {
        m=t%10;
        sum=sum+pow(m,count);
        t/=10;
    }
    if(sum==n)
    {
        printf("%d is a armstrong number",n);
    }
    else{
        printf("NOT a armstrong number");

    }
   return 0;

}