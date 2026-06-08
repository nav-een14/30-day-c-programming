//sum of element in array

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the element of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   int sum=0;
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }
    
    printf("sum of element in array is %d",sum);
    return 0;
}