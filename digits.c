#include<stdio.h>
int main()
{
    int n,m,sum=0,t;
    printf("Enter your number:");
    scanf("%d",&n);
    for(t=n; n>0;n=n/10)
    {
        m=n%10;
        sum=sum+m;
        
    }
    printf("The sum of the digits is %d\n",sum);
    printf("The value of t is %d",t);

    return 0;
}