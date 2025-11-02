  // Q96: Reverse each word in a sentence without changing the word order. //

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void revword(char str[],int start,int end)
{
  while(start<end)
  { 
    char temp;
    temp = str[start];
    str[start]=str[end];
    str[end] = temp;
    start++;
    end--;
  }
}

void main()
{
  char str[100],start=0,i;
  printf("Enter a string: ");
  fgets(str,100,stdin);

  int n=strlen(str);

  for(i=0;i<=n;i++)
  {
    if(str[i]==' ' || str[i]=='\0')
    {
      revword(str,start,i-1);
      start = i+1;
    }
  }
  printf("%s", str);
}

