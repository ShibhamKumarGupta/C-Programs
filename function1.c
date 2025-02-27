#include<stdio.h>
/*Using function C code to add two numbers.*/
int sum(int x, int y);
int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
   printf("The sum is %d",sum(a,b));
   return 0;
}
int sum(int x,int y)
{
    return x+y;
}