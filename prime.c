/*#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter your number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
        
        

    }
    if(count==2)
    {
        printf("%d is a prime number",num);
    }
    else{
        printf("Not a prime number",num);
    }
    return 0;
}*/

#include<stdio.h>
void prime(int k);
int main()
{
    int num,count;
    printf("Enter your number:");
    scanf("%d",&num);
    prime(num);
        
    
    return 0;
}

void prime(int k)

{
    int count=0;
    for(int i=1;i<=k;i++)
    {
        if(k%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number",k);
    }
    else{
        printf("Not a prime number",k);
    }
    
}

