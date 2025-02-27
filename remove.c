#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter string with spaces:");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            for(int j=i;j<strlen(s);j++)
            {
                s[j]=s[j+1];
            }
        }
    }
    /*for(int i=0;i<strlen(s);i++)
    {
        printf("%s",s);
    }*/
    printf("Now the String is: %s",s);
    return 0;

}