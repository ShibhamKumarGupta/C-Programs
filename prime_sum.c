#include<stdio.h>
int main()
{
    int n,num,count=0,sum=0;
    printf ("Enter the limit:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        num=i;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            printf("%d\n",num);
            sum=sum+num;
        }
        //printf("%d\n",sum);

    }
    //printf("The sum is %d",sum);
    return 0;
}
/*#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        printf("Yes %d is a prime number",n);
    }
    else{
        printf("Not a prime number");
        return 0;
    }

}*/