
//power of number 
#include <stdio.h>
 int powerofnum(int base,int power){
     if(power==0){
         return 1;
     }
     return base*powerofnum(base,power-1);
 }
    
int main()
{
   int base,power;
   printf("enter the number");
   scanf("%d",&base);
   printf("enter the power");
   scanf("%d",&power);
   printf(" power of number is %d",powerofnum(base,power));

    return 0;
}