#include<stdio.h>
int main(){
    int arr[3][3];
    printf("insert the element\n");
    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            printf("index no--%d %d=",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("------------Transpose of the matrix-------------\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    
}
