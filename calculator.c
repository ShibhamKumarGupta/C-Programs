#include<stdio.h>
int main()
{
    float a,b;
    char operator;
    printf("Enter your operator:");
    scanf("%c",&operator);
    printf("Enter the two numbers:");
    scanf("%f%f",&a,&b);
    
    switch(operator)
    {
        case '+': printf("The addition is %f",a+b);
        break;
        case '-': printf("The subtraction is %f",a-b);
        break;
        case'*': printf("The multiplication is %f",a*b);
        break;
        case '/': if(b==0)
        {
            printf("Undefined");
        }  
        else 
        {
            printf("The division is %f",a/b);
        } 
        break;
    }
    return 0;
}