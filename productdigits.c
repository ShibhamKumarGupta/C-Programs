#include<stdio.h>
int main(){
    int n,r,product=1;
    printf("Enter your number:");
    scanf("%d",&n);
    for(int i=1;n>0;i++){
        r=n%10;
        product=product*r;
        n=n/10;
    }
    printf("Product of the digits is %d",product);
    return 0;
}