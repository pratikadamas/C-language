#include<stdio.h>
int main(){
    struct complex{
        int a;
        int b;
    }s1,s2,s3;
    printf("real part 1st number=");
    scanf("%d",&s1.a);
    printf("imagenary part 1st number=");
    scanf("%d",&s1.b);
     printf("real part 2st number=");
    scanf("%d",&s2.a);
    printf("imagenary part 2st number=");
    scanf("%d",&s2.b);
    printf("%d+i%d",s1.a+s2.a,s1.b+s2.b);
    
}
