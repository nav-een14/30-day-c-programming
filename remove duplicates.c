//remove duplicates

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
  int j=0;
  for(int i=1;i<n;i++){
      if(arr[i]!=arr[j]){
          j++;
          arr[j]=arr[i];
      }
  }
  printf("after removing duplicates in array");
  for(int i=0;i<=j;i++){
      printf("%d",arr[i]);
  }
    return 0;
}