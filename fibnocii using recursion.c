
//fibnocci series
#include <stdio.h>
 int fibnoci(int num){
     if(num==0)
     return 0;
     if(num==1)
     return 1;
     return fibnoci(num-1)+fibnoci(num-2);
 }
int main()
{
   int n;
   printf("enter the number");
   scanf("%d",&n);
   printf("fibnoci series ");
  for(int i=0;i<n;i++)
  
   printf("%d",fibnoci(i));

    return 0;
}