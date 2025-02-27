#include<stdio.h>
int main()
    {
      /* int v=10;
       
       int *p1=&v;
       int **p2=&p1;
       int ***p3=&p2;
       
       printf("%d",***p3);*/
       int v=780;
       int **p1,*p2;
       p1=&p2;
       p2=&v;
       printf("%d %d %d",v,&v,*p2);
       return 0;
    }


