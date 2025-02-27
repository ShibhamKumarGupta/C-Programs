#include<stdio.h>
int main()
{
    char s1[100],s2[100],*s1ptr,*s2ptr;
    printf("Enter your first string:");
    gets(s1);
    printf("Enter your secong string:");
    gets(s2);
    s1ptr=s1;
    while(*s1ptr!='\0')
    {
        s1ptr++;
    }
    s2ptr=s2;
    while(*s2ptr!='\0')
    {
        *s1ptr=*s2ptr;
        s1ptr++;
        s2ptr++;
    }
    *s1ptr='\0';
    

    printf("The string Now is %s",s1);
    return 0;


}