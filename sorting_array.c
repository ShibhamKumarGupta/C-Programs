#include<stdio.h>
int main()
{
    int a[5],temp;
    printf("Enter the values u want to short:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The elements of the array in acending order is:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}