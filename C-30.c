// transpose of a matrix
#include <stdio.h>

int main()
{
   int arr[3][3];
  int i,j;
  printf("enteer your array element\n");
   for( i=0;i<3;i++)
   {
       for(j=0;j<3;j++){
            printf("index %d %d =",i,j);
           scanf("%d",&arr[i][j]);
       }
       printf("\n");
   }
   for(i=0;i<3;i++){
       for(j=0;j<3;j++)
      {
          printf("%d",arr[j][i]);
          
      } 
       printf("\n");
       
      
   }
}
