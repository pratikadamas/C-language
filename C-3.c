#include<stdio.h>

int main()
{
int a=10;
int b,c,d,e;
b=a++;
c=b--;
d=++c;
e=--d;
printf("%d\n",b);
printf("%d\n",c);
   printf("%d\n",d);
   printf("%d\n",e);
    return 0;
}
