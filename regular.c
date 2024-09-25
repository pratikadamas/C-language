#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-2*x-5

int main()
{
    float a,b;
    int itr=0;
    float fa,fb,c,fc,err_tol=0.0001;

    printf("enter the 1st interval--");
    scanf("%f",&a);
    printf("enter the 2nd interval--");
    scanf("%f",&b);
    if( f(a)*f(b)<0 )
    {

        while (fabs(b-a)>=err_tol)
        {

            fa=f(a);
            fb=f(b);
            c=a-f(a)/(f(b)-f(a))*(b-a);
            fc=f(c);
            if (fc==0)
            {
                printf(" The value of the root c=%f and f(c)= %f",c,f(c));
            }
            else if(fa*fc<0)
            {
                b=c;
            }
            else
            {
                a=c;
            }
            itr++;


        }
        printf("The value of the root is c %f and f(c)=%f",c,f(c));
        printf(" No of iteration =%d ",itr);
    }
    else
        printf("Invalid interval selection");



    return 0;
}