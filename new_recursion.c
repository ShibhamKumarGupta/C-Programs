void head_fun(int num);
#include<stdio.h>
int main()
{
    int a=7;
    printf("Use of Non-Tail/Head Recursive function\n");
    head_fun(a);
    return 0;
}
void head_fun(int num)
{
    if(num>0)
    {
        head_fun(num-1);
        printf("%d ",num);
    }
}