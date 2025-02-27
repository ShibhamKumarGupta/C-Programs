#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],sum[5][5];
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of Matrix1:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Matrix2:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("Now printing the Sum of Matrix1 and Matrix2:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    

}