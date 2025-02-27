#include<stdio.h>
#include<string.h>
int main()
{
    char arr[15];
    int n;
    printf("Enter your string:");
   // scanf("%s",arr);
   fgets(arr,sizeof(arr),stdin);
    n=strlen(arr);
    
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}