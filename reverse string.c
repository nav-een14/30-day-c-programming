//reverse string
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
 while(left<=right){
    char temp=s[left];
     s[left]=s[right];
     s[right]=temp;
     right--;
     left++;
 }
 printf("reversed string =%s",s);
}