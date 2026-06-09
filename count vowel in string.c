//palindrome of string
#include <stdio.h>
#include<string.h>
int main()
{
  char s[50];
  printf("enter the string: ");
  scanf("%s",s);
 int count=0;
 for(int i=0;s[i]!='\0';i++){
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
     count++;
 }
 }
printf("count of vowels=%d",count);

}