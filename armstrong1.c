#include<stdio.h>
int main()
{
    int m,sum,num,n;
    printf("Enter your upper limit:");
    scanf("%d",&n);

    for(int i=100;i<n;i++)
    {
      num=i;
      sum=0;
      for(int j=1;num>0;j++)
      {
        m=num%10;
        sum=m*m*m+sum;
        num=num/10;
      }
      if(sum==i)
      {
        printf("%d\n",i);
      }


    }
    return 0;
}