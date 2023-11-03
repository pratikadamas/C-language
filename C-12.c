#include<stdio.h>
int sum(int m){
    int n=0;
    if(m==0){
        printf("%d\n",m);
    }
    else
    {
       n=n+m;
   printf("%d\n",n);
    sum(m-1);
   
 // printf("sum is = %d \n",n);
 
    }
}
int main(){
    int range;
    printf("entre the range = ");
    scanf("%d",&range);
    sum(range);
    return 0;
}
