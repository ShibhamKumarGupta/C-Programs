#include<stdio.h>
int main()
{
    int a[20],n,count=0,j;
    printf("Enter the number of elements you want to check for:");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&a[i]);
        j=a[i];
        
        
            if(j%i==0)
            {
                count++;

            }
            
            
        }
        if(count==2)
        {
            printf("Yes it is a prime number");
        }
        else{
            printf("No it is not a prime number");
        }
    
    return 0;
    
}