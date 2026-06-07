//fibonocii series

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
   int n1=0;
   int n2=1;
   for(int i=0;i<n;i++){
       if(i==0){
       printf("%d",n1);
       continue;
       }
       if(i==1){
       printf("%d",n2);
       continue;
       }
       
      int n3=n1+n2;
       n1=n2;
       n2=n3;
       
    printf("%d",n3);
    
}
    return 0;
}