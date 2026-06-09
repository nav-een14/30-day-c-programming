//compare two string without using strcmp
#include <stdio.h>

int main()
{
  char s[50];
  char s1[50];
  printf("enter the string1: ");
  scanf("%s",s);
   printf("enter the string2: ");
  scanf("%s",s1);
  int flag=0;
  int i=0;
  while(s[i]!='\0'&&s1[i]!='\0'){
  if(s[i]!=s1[i]){
      flag=1;
      break;
  }
      i++;
     
  }
  if(flag==0){
       printf("both are equal");
  }
  else{
      printf("both are not equal");
  }


}