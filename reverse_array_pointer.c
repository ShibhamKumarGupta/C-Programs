#include<stdio.h>
int main()
{
    int arr[20],*ptr,n;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("INput numbers:");
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    printf("Now printing the elments:\n");
    ptr=&arr[n-1];
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*ptr);
        ptr--;
    }
    return 0;
}