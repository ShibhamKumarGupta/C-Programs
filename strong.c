#include<stdio.h>
//STRONG NUMBER IN C.
int main()
{
    int n,sum=0,m,t,fact;
    printf("Enter a number to check its a strong number or not:");
    scanf("%d",&n);
    t=n;
    for(int i=1;n>0;i++)
    {
        fact=1;
        m=n%10;
        n=n/10;
        for(int i=1;i<=m;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==t)
    {
        printf("Strong Number");

    }  
    else{
        printf("Not a Strong Number");
    }
    return 0;
}