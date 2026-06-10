// selection sort

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
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
            min=j;
        }
    }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
  
    printf("sorted array is");
    for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
    }
    return 0;
}