#include<stdio.h>
int main(){
    float a,b,c;
    float root1,root2,short_root;
    printf("Enter a,b,c of the Quadratic equation:");
    scanf("%f%f%f",&a,&b,&c);
    short_root=(b*b)-(4*a*c);
    root1=(-b+short_root)/(2*a);
    root2=(-b-short_root)/(2*a);
    printf("The roots of the Quadratic equation are %f and %f",root1,root2);
    return 0;
}