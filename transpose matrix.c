//transpose of matrix
#include <stdio.h>

int main()
{
   int matrix[10][10];
  
   int result[10][10];
   int n,m;
  printf("enter the row and column");
  scanf("%d %d",&n,&m);
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            printf("Enter element of matrix  at position [%d][%d]: ", i + 1, j + 1);
           scanf("%d",&matrix[i][j]);
       }
      
   }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           result[j][i]=matrix[i][j];
        }
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           printf(" %d",result[i][j]);
       }
      printf("\n");
   }
    return 0;
}