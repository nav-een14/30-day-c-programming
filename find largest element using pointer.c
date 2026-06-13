//largest element in array using pointer


#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the array element");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int *ptr=arr;
    int largest=*ptr;
 for(int i=0;i<n;i++){
     if(*(ptr+i)>largest)
     largest=*(ptr+i);
 }
 printf("largest element is %d",largest);
    return 0;
}