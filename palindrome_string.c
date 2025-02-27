#include<stdio.h>
#include<string.h>
int main()

{
    char a[20];
    int n,count=0;
    printf("Enter your String:");
    scanf("%s",a);
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[n-i-1])
        
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("The String is Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}