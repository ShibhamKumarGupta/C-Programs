#include<stdio.h>
int main()
{
    int marks[2][3]={34,56,76,56,55,88};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}