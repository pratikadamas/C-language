//
// Created by Pratik Giri on 09-02-2025.
//
#include "stdio.h"

void merge(int arr[],int start,int mid ,int end){
    int i=start,j=mid+1,k=0;
    int  aux[end-start+1];
    while(i<=mid&&j<=end){
        if(arr[i]<arr[j]){
            aux[k++]=arr[i++];
        }
        else
        {
            aux[k++]=arr[j++];
        }
    }
    for( ;i<=mid;i++){
        aux[k++]=arr[i];
    }
    for ( ;j<=end; j++) {
        aux[k++]=arr[j];
    }
     k=0;
    for(int i=start;i<=end;i++){
        arr[i]=aux[k++];
    }


}

void merge_sort(int arr[],int start, int end){
    int mid =(start+end)/2;
    if(start<end)
    {
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}



int main(){
    int n;
    printf("Enter the number of element of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Insert your element\n");
    for (int i = 0; i < n; ++i) {
        int x;
        printf("element at index %d \n",i);
        scanf("%d",&x);
        arr[i]=x;
    }

    printf("Before sorting the array\n");
    for (int i = 0; i <n ; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n------------------------------------------------------------------------------------------------\n");

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf(" %d  ",arr[i]);
    }
}