#include<stdio.h>
int sum(int k);
int main()
{
    int n,result;
    printf("Enter your number:");
    scanf("%d",&n);
    result=sum(n);
    printf("The Result is %d",result);
    return 0;
}
int sum(int k)
{
    if(k>0)
    {
        return k+sum(k-1);
    }
    else{
        return 0;
    }
}