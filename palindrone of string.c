//palindrome of string
#include <stdio.h>
#include<string.h>
int main()
{
  char s[50];
  printf("enter the string: ");
  scanf("%s",s);
  int len=strlen(s);
  int left=0;
  int right=len-1;
  int flag=1;
  while(left<right){
if(s[left]!=s[right]){
  flag=0;
}
left++;
right--;
}

if(flag==1){
    printf("string is palindrome");
}
else{
    printf("string is not palindrome");
}

}