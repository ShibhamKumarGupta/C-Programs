#include<stdio.h>
int fact(int a);
int main()
{
    int n,factorial;
    printf("Enter the number you wnat to find factorial:");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial of %d is--%d",n,factorial);
    return 0;
}
int fact(int a)
{
    if(a>0)
    {
        return a*fact(a-1);
    }
    else if(a==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}