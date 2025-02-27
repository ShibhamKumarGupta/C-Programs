#include<stdio.h>
#include<string.h>

int main()
{
   char a[100];
   int ch,count=0;
   printf("enter your String:");
   //scanf("%s",a);
   gets(a);
   ch=strlen(a);
   printf("The number of Characters is %d",ch);
      
  /*gets(a);

   for(int i=0;i<=strlen(a);i++)
   {
    if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
    {
        count++;
    }
   }
   printf("The number of characters is %d",count);*/
   return 0;
   
}