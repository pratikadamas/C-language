//
// Created by Pratik Giri on 04-02-2025.
//
#include "stdio.h"
int main() {
    int n = 8,k=0,index,p=0;

    int arr[] = {100,99,98,95,94,91,90,89};
    for (int i = 0; i < n - 1; ++i) {
        int snall=i;
        for (int j = i + 1; j < n; ++j) {
            // condition many times check
            if (arr[j] < arr[i]) {
                k++;
                index=j;

//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
            }
        }
        //but swaping one time for each iteration.
        int temp = arr[i];
                arr[i] = arr[index];
                p++;
                arr[index] = temp;

        printf("\nstep i=%d\n", i + 1);
        for (int i = 0; i < n; ++i) {
            printf(" %d ", arr[i]);

        }
    }
    printf("\nfinal array \n");
    for (int i = 0; i < n; ++i) {
        printf(" %d ", arr[i]);

    }
    printf("\n k= %d p= %d",k,p);
}
