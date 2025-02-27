#include<stdio.h>
int main()
{
    int n,sum=0,m,t;
    printf("Enter a three digit number:");
    scanf("%d",&n);
     t=n;
    for(int i=1;n>0;i++)
    {
        m=n%10;
        sum=m*m*m+sum;
        n=n/10;
    }
    if(t==sum){
        printf("armstrong number");
    }
    else
    {
      printf("not armstrong");  
    }
    return 0;
}