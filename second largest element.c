// find second largest

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
    int largest=arr[0];
    int secondlargest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest&&arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    
      printf("secondlargest element is %d",secondlargest);  
    return 0;
}