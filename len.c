#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char a[20]="I am Shivam";
    int b=strlen(a);
    for(int i=0;i<b;i++)
    {
        if(a[i]==' '){
        for(int j=i;j<b;j++)
        {
        
        
           a[j]=a[j+1]; 
        
        }
        }
    }
      printf("%s",a);
    return 0;
}