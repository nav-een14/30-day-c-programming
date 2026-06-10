// insertion sort

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
    int j;
    for(int i=0;i<n;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
   arr[j+1]=key;
    }
    printf("sorted array is");
    for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
    }
    return 0;
}