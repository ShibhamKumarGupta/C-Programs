#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int count=0;
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("No. of Words is %d",count+1);
    return 0;
}