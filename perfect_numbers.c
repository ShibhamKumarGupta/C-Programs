#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number to check:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect number",n);
    }
    else{
        printf("%d is Not a perfect number",n);
    }
    return 0;
}