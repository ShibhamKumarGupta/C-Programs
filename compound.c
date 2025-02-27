#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("Enter the principal,rate of interest and time period:");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*pow(1+(r/100),t)-p;
    printf("Thecompound interest is %f",ci);
    return 0;

}