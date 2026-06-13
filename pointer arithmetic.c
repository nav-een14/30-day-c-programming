// pointer arithmetic


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
    printf("array element");
 for(int i=0;i<n;i++)
 printf(" %d",*(ptr+i));
    return 0;
}