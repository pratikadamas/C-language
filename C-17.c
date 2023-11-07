#include<stdio.h>
int sum(int m){
int n=0;
    for(int i=m;m>0;m--){
    n=n+m;
    
    }
    printf("value of sum =%d",n);
}
int main(){
    int range;
    printf("entre the range = ");
    scanf("%d",&range);
    sum(range);
    return 0;
}
