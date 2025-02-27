#include<stdio.h>
#include<string.h>
int main()
{
    char arr[15],count=0;
    int n;
    printf("Enter your word:");
    scanf("%s",arr);
    n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u')
        {
            count++;
        }
    }
    printf("No. of vowels is %d",count);
    return 0;
}