#include<stdio.h>
int main()
{
    int rows,c=1;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                c=1;
            
            else
                c=c*(i-j+1)/j;
                printf("%2d",c);
            
        }
        printf("\n");
    }
    return 0;
}