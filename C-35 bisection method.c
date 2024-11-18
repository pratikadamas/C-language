
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

int n=0;
    printf("\n      n         an         bn    Xn+1=(an+bn)/2    f(Xn+1)     \n");

    if(f(a)*f(b)<0)
     n++;
        

        printf(" root is %f ", c);
    }

    else{
        printf(" Invalid interval selection\n");
    }

    return 0;
}