//largest of three numbers

#include <stdio.h>

int main()
{
  int a,b,c;
  printf("enter the a: ");
  scanf("%d",&a);
  printf("enter the b: ");
  scanf("%d",&b);
  printf("enter the c: ");
  scanf("%d",&c);
if(a>b&&a>c){
    printf("a is greater than b and c");
}
else if(b>a&&b>c){
    printf("b is greater than a and c");
}
else{
    printf("c is greater than a and b");
}
    return 0;
}