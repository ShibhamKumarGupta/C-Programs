#include<stdio.h>
int main(){
    int n,s,m;
    printf("Enter your number;");
    scanf("%d",&n);
    m=n%10;
    for(int i=1;n>0;i++){
        s=n%10;
        n=n/10;
    }
   printf("The first digit is %d and the last digit is %d",s,m);
   return 0;
}