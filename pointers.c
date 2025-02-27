#include<stdio.h>
int main()
{
   int x,y,*ptr;
   x=10;
   ptr=&x;
   y=*ptr;
   printf("%d is stored in %u\n",x,&x);
   
   printf("%d is stored in %u\n",*&x,&x);
   
   printf("%d is stored in %u\n",*ptr,ptr);
   
   printf("%d is stored in %u\n",y,*&ptr);
   
   printf("%d is stored in %u\n",ptr,&ptr);
   
   printf("%d is stored in %u\n",y,&y);
   *ptr=25;
   printf("\n\n Now x=%d\n",x);
   return 0;
}