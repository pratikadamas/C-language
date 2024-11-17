
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
    if(f(a)*f(b)<0){

        while(fabs(b-a)>error)
        {

            printf("      %d        %.3f      %.3f    ",n,a,b);
                c = (a + b) / 2;

            printf("    %.3f        %f \n",c,f(c));
                if (f(c) == 0)
                printf(" ROOT is c= %f", c);

                else if (f(a) * f(c) < 0) {
                    b = c;
                }
            else {
                    a = c;
                }
n++;
        }

        printf(" root is %f ", c);
    }

    else{
        printf(" Invalid interval selection\n");
    }

    return 0;
}