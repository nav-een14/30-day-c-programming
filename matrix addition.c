//matrix addition
#include <stdio.h>

int main()
{
   int matrix1[10][10];
   int matrix2[10][10];
   int sumMatrix[10][10];
   int n,m;
  printf("enter the row and column");
  scanf("%d %d",&n,&m);
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            printf("Enter element of matrix 1 at position [%d][%d]: ", i + 1, j + 1);
           scanf("%d",&matrix1[i][j]);
       }
      
   }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           
            printf("Enter element of matrix 2 at position [%d][%d]: ", i + 1, j + 1);
           scanf("%d",&matrix2[i][j]);
       }
      
   }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
       }
      
   }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           printf(" %d",sumMatrix[i][j]);
       }
      printf("/n");
   }
    return 0;
}