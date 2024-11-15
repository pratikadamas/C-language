
#include "stdio.h"
float f( float x,float y)
{
    return x+y;
}
int main(){
    float Xo,Yo,Y,X,h;
    int n;
    printf("Enter the value of Xo\n ");
    scanf("%f",&Xo);

    printf("Enter the value of Yo\n ");
    scanf("%f",&Yo);

    printf("Enter the value of X = ");
    scanf("%f",&X);

    printf("Enter the sub_interval = ");
    scanf("%d",&n);

    h=(X-Xo)/n;
  printf("    Xn-1            Yn-1       f(Xn-1,Yn-1)        Yn      \n");
    for (int i = 1; i <=n; ++i)
    {
        printf("     %f      %f  ",Xo,Yo);

        Y= Yo + h * f(Xo,Yo);
        printf("     %f      %f  \n",f(Xo,Yo),Y);
        Yo=Y;
        Xo=Xo+h;

    }

    printf("\n value of Y = %f at X = %f",Y,X);


}