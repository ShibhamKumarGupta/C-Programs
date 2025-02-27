#include<stdio.h>
int main()

{
    int arr[20],n;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Printing the elements in reverse order:\n");
     for(int i=n-1;i>=0;i--)
     {
       printf("%d\n",arr[i]);
     }
     return 0;

}