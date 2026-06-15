//two sum

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter element of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
            printf("indices :%d %d",i,j);
        }
    }

    return 0;
}