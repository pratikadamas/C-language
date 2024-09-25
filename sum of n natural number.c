
// Created by Pratik Giri on 25-09-2024.
   //// sum of n natural number
#include <stdio.h>
int sum(int a) {
    int x;
    if (a == 1) {
        return 1;
    }

    return x = a + sum(a - 1);
}

int main() {
    int n, c;
    printf("ENTER RANGE 0F N NUMBER=");
    scanf("%d", &n);
    c = sum(n);
    printf("%d", c);
}
