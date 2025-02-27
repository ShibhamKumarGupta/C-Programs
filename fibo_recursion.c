#include<stdio.h>
int fibo_num(int j);
int main()
{
    int n;
    printf("Enter the no. of terms u want to print:");
    scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    printf("%d ",fibo_num(i));
   }
   return 0;
}
int fibo_num(int j)
{
    if(j==0)
    {
        return 0;
    }
    if(j==1)
    {
        return 1;
    }
    else{
        return fibo_num(j-1)+fibo_num(j-2);
    }
}