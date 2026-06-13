//swap the number using pointer

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    
printf("after swapping %d %d",a,b);
    return 0;
}