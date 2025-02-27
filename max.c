#include<stdio.h>
int main()
{
    int a[20],n,max=0,max2=0;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter your values:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       {
        max2=max;
        max=a[i];
       }
       if(a[i]!=max && a[i]>max2)
       {
        max2=a[i];
       }
    }
    printf("The Largest Number is %d.",max);
    printf("\nThe second Largest Number is %d.",max2);

   return 0; 
}