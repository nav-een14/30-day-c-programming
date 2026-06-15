//best time to buy and sell the stock

#include <stdio.h>

int main()
{
    int prices[10];
    int n;
    printf("enter the size ");
    scanf("%d",&n);
    printf("enter element of prices ");
    for(int i=1;i<n;i++){
        scanf("%d",&prices[i]);
    }
   int minprice=prices[0];
   int maxprofit=0;
   for(int i=0;i<n;i++){
       if(prices[i]<minprice)
       minprice=prices[i];
       int profit=prices[i]-minprice;
       if(profit>maxprofit){
           maxprofit=profit;
       }
   }
printf("maximum profit %d",maxprofit);
    return 0;
}