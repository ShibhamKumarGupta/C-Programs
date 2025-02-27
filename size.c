#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    for(int i=1;;i++)
    {
        printf("Enter your even number:");
        scanf("%d",&n);
        if(n%2==0){
            break;
        }
    }
    
    getchar();

  /*  char name[]="Shivam";
    char title[]={'G','u','p','t','a','\0'};
    printf("%d\n",strlen(name));
    printf("%d\n",strlen(title));
    */
    return 0;
}