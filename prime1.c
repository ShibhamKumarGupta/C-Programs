#include<stdio.h>
 int main()
 {
    int n,count=0;
    printf("Enter the number to check for Prime:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        else{
            continue;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number",n);
    }
    else{
        printf("Not a Prime number");
    }
    return 0;
 }