#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of whom you want to print the table:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}