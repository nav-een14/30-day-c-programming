//move zeroes

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter the size ");
    scanf("%d",&n);
    printf("enter element of array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        arr[index++]=arr[i];
    }
    while(index<n){
        arr[index++]=0;
    }
 for(int i=0;i<n;i++){
     printf(" %d",arr[i]);
 }
    return 0;
}