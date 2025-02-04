//
// Created by Pratik Giri on 04-02-2025.
//
#include "stdio.h"
int main(){
    int n=8;
    int arr[] ={ 56,36,-9,56,123,-78,99,-102};
    for (int i=0;i<n-1 ;++i)
    {
        for (int j=i+1; j<n; ++j)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf(" %d ",arr[i]);

    }

}