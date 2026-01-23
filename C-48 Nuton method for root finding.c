
#include "stdio.h"
#include "math.h"
float f(float x)
  {
    return x*x*x*x-x-10;

  }

  float g(float x)
  {
    return 4*x*x*x-1;
 }
int main ()

{

    float x,Xo,Y,Err_tol;
    printf(" Enter the initial value of Xo = ");
    scanf("%f",&Xo);

    printf("Enter the tolerance = ");
    scanf("%f",&Err_tol);


    printf("  n    |     Xn       |      f(Xn)      |        Xn+1        \n");

    int n=0;
    Y= f(Xo);
    while(fabs(Y)>Err_tol)
    {
        n++;
        x=Xo-f(Xo)/g(Xo);
      //  printf("%f  %d \n",x,i++);
        Y= f(x);
        Xo=x;
        printf("   %d        %f           %f          %f\n",n,Xo,Y,x);
    }

    printf("\nThe value of root is %f ",Xo);

    return  0;
}