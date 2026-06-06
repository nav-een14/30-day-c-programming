//reverse number
#include <stdio.h>

int main() {
    int n;
int rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
   while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
printf("reversed number is %d\n",rev);
    return 0;
}