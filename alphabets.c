#include<stdio.h>
int main()
{
    char arr[27],*ptr;
    ptr=arr;
    
    for(int i=0;i<27;i++)
    {
       *ptr=i+'A';
       ptr++;
    }
    printf("Now Printing all the alphabets:");
    ptr=arr;
    for(int i=0;i<27;i++)
    {
        printf("%c ",*ptr);
        ptr++;
    }
 return 0;   
}