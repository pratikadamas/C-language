//
// Created by Pratik Giri on 26-09-2024.
//
#include "stdio.h"
void revers(int arr[], int size){
    if(size==0||size==1)
       return;
   int temp=arr[0];
    arr[0]=arr[size-1];
arr[size-1]=temp;
    return revers(arr+1,size-2);
}
int main(){
int arr[6]={1,2,45,78,90,-98};
revers(arr,6);
for(int i=0;i<6;i++)
{
printf("%d ",arr[i]);
}
return 0;
}