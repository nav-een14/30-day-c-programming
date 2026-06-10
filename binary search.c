//binary search

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the element to search: ");
    scanf("%d",&target);
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            printf("element found at index %d",mid);
        }
        if(arr[mid]<target){
            left=mid+1;
        }
        if(arr[mid]>target){
            right=mid-1;
        }
        
    }
            printf("element not found");
        
    return 0;
}