#include "stdio.h"
float f(float x, float y){
    return (y*y-x*x)/(y*y+x*x);
}

int main(){
    printf("    Runge Kutta Methode\n");
    float Xo,Yo,h,X,Y,K1,K2,K3,K4,K;
    int n;
    printf("Initial value of Xo = ");
    scanf("%f",&Xo);

    printf("\nInitial value of Yo = ");
    scanf("%f",&Yo);

    printf("\n value of X = ");
    scanf("%f",&X);



    printf("\n No of sub intervals ");
    scanf("%d",&n);
    h=(X-Xo)/(float)n;

    int i;
    for (i=0;i<n;i++)
    {
        K1=h*f(Xo,Yo);
        K2=h*(f((Xo+h/2),(Yo+K1/2)));
        K3=h*f((Xo+h/2),(Yo+K2/2));
        K4=h*f((Xo+h),(Yo+K3));

        K=(K1+2*K2+2*K3+K4)/(float)6;
//        printf("\n %f ",K);

        Y=Yo+K;

        //printf("\n %f ",Y);
        Xo=Xo+h;

        Yo=Y;
        
    }

    printf("\n Y = %f at X = %f ",Yo,Xo);
    return 0;

}