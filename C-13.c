#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5},sumodd=0,sumeven=0;
    for(int i=0;i<=4;i++){
        if(arr[i]%2==1)
        {
            sumodd=sumodd+arr[i];
        }
        else{
            sumeven=sumeven+arr[i];
        }
    }
    printf("%d \n",sumodd);
    printf("%d \n",sumeven);

    printf("diff between %d \n",sumeven-sumodd);

}
