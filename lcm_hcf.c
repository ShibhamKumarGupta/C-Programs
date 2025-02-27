#include<stdio.h>
int main(){
    int n1,n2,min,lcm,hcf;
    printf("Enter yor numbers:");
    scanf("%d%d",&n1,&n2);
    min=(n1<n2)?n1:n2;
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    printf("The lcm and hcf are %d and %d",lcm,hcf);
    return 0;
}