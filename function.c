#include<stdio.h>
void indian(){
    printf("Namaste\n");
}
void french(){
    printf("Bonjour\n");
}
 int main(){
    char c;
    printf("Enter the user is Indian or french:");
    scanf("%c",&c);
    if(c=='i'){
        indian();
    }
    else if(c=='f') 
    {
        french();
    }
    else {
        printf("hii");
    }
    return 0;
 }