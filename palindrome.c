#include<stdio.h>
int main(){
    int n,m,num=0,t;
    printf("Enter your number:");
    scanf("%d",&n);
    t=n;
    for(int i=1;n>0;i++){
        m=n%10;
        num=num*10+m;
        n=n/10;
    }
    if(t==num){
        printf("Palindrome number");

    }
    else{
        printf("Not palindrome number:");

    }
    return 0;
}