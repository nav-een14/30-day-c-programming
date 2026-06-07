// check armstrong number for three digit

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int org=n;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(org==sum){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}