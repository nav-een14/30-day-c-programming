//smallest element in array

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
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
        min=arr[i];
        }
    }
printf("smallest element in array is %d",min);
    return 0;
}