//merge two sorted array
#include<stdio.h>
int main(){
    int arr1[10];
    int arr2[10];
    int n1,n2;
    printf("enter size od two array");
    
    scanf("%d %d",&n1,&n2);
    printf("enter first element");
    for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    }
    printf("enter second array");
    for(int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
        printf("%d",arr1[i++]);
        }
        else{
        printf("%d",arr2[j++]);
        }
    }
        while(i<n1)
        printf("%d",arr1[i++]);
        while(j<n2)
        printf("%d",arr2[j++]);
    
    
    return 0;
    
}