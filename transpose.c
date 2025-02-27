#include<stdio.h>
int main()
{
    int matrix[5][5],transpose[5][5],r,c;
    printf("Enter the Rows and Columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the Elements of your Matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           transpose[i][j]=matrix[j][i];
        }
    }
    printf("Now printing The Matrix Transpose:\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

