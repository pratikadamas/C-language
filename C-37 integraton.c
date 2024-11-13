
#include "stdio.h"
float f(float x){
    return 1/(1+x*x);
}
int main(){
    float a,b,h,sum1=0,sum2=0;
    int n,m;
    printf("Enter your sub interval \n");
    scanf("%d",&n);
    m=n+1;
    float arr[m];
    printf("Enter your lower limit\n");
    scanf("%f",&a);

    printf("\nEnter your upper limit \n");
    scanf("%f",&b);

   h=(b-a)/n;

   for(int i=0;i<m;i++){
       arr[i]=f((float)i/n);
       printf("%f   ",arr[i]);
   }
   sum1=arr[0]+arr[n];

   for(int i=1;i<n;i++){

       sum2=sum2+arr[i];
   }

   float  I=h*(sum1+2*sum2)/2;

   printf(" Area under the curve %f ",I);
   return 0;
}