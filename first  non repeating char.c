
//first non repeating character
#include <stdio.h>

int main()
{
  char s[100];
  printf("enter the string");
  scanf("%s",s);
  int freq[256]={0};
  for(int i=0;s[i]!='\0';i++){
      freq[s[i]]++;
  }
  for(int i=0;s[i]!='\0';i++){
      if(freq[s[i]]==1){
          printf("first non repating character %c",s[i]);
          break;
      }
  }

    return 0;
}