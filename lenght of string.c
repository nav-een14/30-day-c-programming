//lenght of string without using strlen
#include <stdio.h>

int main()
{
  char s[50];
  printf("enter the string: ");
  scanf("%s",s);
  int lenght=0;
while(s[lenght]!='\0'){
      lenght++;
  }
printf("lenght of string=%d",lenght);
    return 0;
}