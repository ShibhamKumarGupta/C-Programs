#include<stdio.h>
#include<stdbool.h>
bool isSorted(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
        return false;
        }
    }
    return true;
}
   int main()
   {
    int arr[]={1,3,5,11,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    if(isSorted(arr,size))
    {
     printf("Array is sorted in ascending order:\n");
    }
    else{
        printf("Array is not Sorted in ascending order:\n");
    }
    return 0;
   }