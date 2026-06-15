//remove duplicates

#include <stdio.h>

int main()
{
   char s1[50];
   char s2[60];
   printf("enter two string");
   scanf("%s %s",s1,s2);
   int count[26]={0};
   for(int i=0;s1[i]!='\0';i++){
       count[s1[i]-'a']++;
   }
   for(int i=0;s2[i]!='\0';i++){
       count[s2[i]-'a']--;
   }
   int flag=1;
   for(int i=0;i<26;i++){
       if(count!=0)
       flag=0;
   }
   if(flag){
   printf("anagram");
   }
   else{
       printf("not anagram");
   }
    return 0;
}