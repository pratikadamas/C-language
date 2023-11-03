#include<stdio.h>
void area(int r){
    int m;
    if(r==0){
        printf("AREA IS ZERO\n");
    }
    else
    {
        printf("AREA IS = %f\n",3.14*r*r);
        printf("ENTER NEW RADIUS\n");
        scanf("%d",&m);
        area(m);
    }
}
int main(){
    int radius;
    printf("ENTRE THE RADIUS\n");
    scanf("%d",&radius);
    area(radius);
    return 0;
}
