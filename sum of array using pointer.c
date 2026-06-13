//sum of array using pointer


#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the array element");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int *ptr=arr;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("sum of array %d",sum);
    return 0;
}