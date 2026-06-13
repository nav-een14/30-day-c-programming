// reverse string using pointer


#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("enter the string :");
    scanf("%s",s);
   
    char *start=s;
    char *last=s+strlen(s)-1;
    while(start<last){
   char temp=*start;
        *start=*last;
        *last=temp;
        *start++;
        *last--;
    }
    printf("reversed string %s",s);
    return 0;
}