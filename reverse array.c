//reverse array 

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
  int start=0;
  int end=n-1;
while(start<end){
       int temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
   }
   
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
   
    return 0;
}