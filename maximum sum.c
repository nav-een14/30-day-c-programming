//maximum subarray
#include<stdio.h>
int main(){
int arr[20];
int n;
printf("enter the size");
scanf("%d",&n);
printf("enter the element of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int maxsum=arr[0];
int currsum=arr[0];
for(int i=1;i<n;i++){
    if(currsum+arr[i]>arr[i]){
        currsum=currsum+arr[i];
    }
    else{
        currsum=arr[i];
    }
    if(currsum>maxsum){
        maxsum=currsum;
    }
}
printf("%d",maxsum);
    
    return 0;
    
}