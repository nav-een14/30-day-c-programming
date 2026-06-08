//largest element in array

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
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
        }
    }
printf("largest element in array is %d",max);
    return 0;
}