//
// Created by Pratik Giri on 04-02-2025.
//
#include "stdio.h"
int main() {
    int n = 8,k=0;

    int arr[] = {100,99,98,95,94,91,90,89};
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[i]) {
                k++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
        printf("\nstep i=%d\n", i + 1);
        for (int i = 0; i < n; ++i) {
            printf(" %d ", arr[i]);

        }
    }
    printf("\nfinal array \n");
    for (int i = 0; i < n; ++i) {
        printf(" %d ", arr[i]);

    }
    printf("\n k= %d",k);
}
