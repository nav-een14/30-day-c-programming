//linear search

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
   int found=0;
    int target;
    printf("enter the element to search: ");
    scanf(" %d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
           printf("element found at index %d",i+1);
           found=1;
           break;
        }
    }
   if(found==0){
       printf("element not found in array");
   }
    
    
    return 0;
}