#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter upto which you want to print series:");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(int i=1;i<=(n-2);i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
