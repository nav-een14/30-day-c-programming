
//lcm of numbers
#include <stdio.h>
 int gcd(int a,int b){
     
 while(b!=0){
     int temp=b;
     b=a%b;
     a=temp;
 }
 return a;
 }
 int lcm(int a,int b){
     return (a*b)/gcd(a,b);
 }
    
int main()
{
   int a,b;
   printf("enter the number ");
   scanf("%d %d",&a,&b);
   printf("GCD of number is %d",lcm(a,b));
    return 0;
}