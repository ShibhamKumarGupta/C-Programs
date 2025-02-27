/*#include <stdio.h>

int countVowels(char *str) {
    int count = 0;
    
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int vowelCount = countVowels(str);
    
    printf("Number of vowels: %d\n", vowelCount);
    
    return 0;
}
*/
#include<stdio.h>
#include<string.h>

int main()
{
  char arr[100],count=0;
  int n;
  printf("Enter your String:");
  gets(arr);
  n=strlen(arr);
  for(int i=0;i<n;i++)
  {
    if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
    {
        count++;
    }
  }
  printf("No of vowels is %d",count);
  return 0;
}