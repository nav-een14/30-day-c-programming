//check prime or not

#include <stdio.h>

int main()
{
   int n;
   printf("enter the number: ");
   scanf("%d",&n);
   if(n%2==0){
       printf("%d is prime number",n);
   }
   else{
       printf("%d is not prime number",n);
   }

    return 0;
}