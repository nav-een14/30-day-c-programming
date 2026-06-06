//check palindrome
#include <stdio.h>

int main() {
    int n;
int rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int orginal =n;
   while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
if(rev==orginal){
    printf("%d is palindrome",orginal);
    
}
else{
    printf("%d is not palindrome",orginal);
}
    return 0;
}