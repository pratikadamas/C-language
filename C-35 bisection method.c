//
// Created by Pratik Giri on 08-11-2024.
//
#include "stdio.h"
#include "math.h"
float f(float x){
    return x*x*x-3*x+1.06;
}
int main(){
    float a,b,c,error=0.0001;
    printf("insert your interval\n");
    printf(" value of a = ");
    scanf("%f",&a);
    printf(" value of b = ");
    scanf("%f",&b);
    if(f(a)*f(b)<0){
        while(fabs(b-a)>error)
        {
                c = (a + b) / 2;
                if (f(c) == 0)
                printf(" ROOT is c= %f", c);

                else if (f(a) * f(c) < 0)
                    b = c;
            else
                a = c;

//            if (fabs(b - a) < error)
          // printf(" root is %f", c);

        }

        printf(" root is %f ", c);
    }
    else{
        printf(" Invalid interval selection\n");
    }

    return 0;
}