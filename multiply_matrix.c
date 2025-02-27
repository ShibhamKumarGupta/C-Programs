#include<stdio.h>
int main()
{
    int m1[5][5],m2[5][5],newm[5][5],r,c;
    printf("Enter hte number of Rows and Columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of 1st matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
     printf("Enter the elements of 2nd matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            newm[i][j]=0;
            for(int k=0;k<c;k++)
            {
                newm[i][j]=newm[i][j]+  m1[i][k]*m2[k][j];
            }
        }
    }
    printf("Now printing the multiplication:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",newm[i][j]);
        }
        printf("\n");
    }
    return 0;

}
