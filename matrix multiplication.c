//matrix multiplication
#include <stdio.h>

int main()
{
   int matrix1[10][10];
   int matrix2[10][10];
   int result[10][10];
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
            result[i][j]=0;
            for(int k=0;k<n;k++){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
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