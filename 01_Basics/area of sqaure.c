#include<stdio.h>
#include<math.h>//we use math fuction when we do pow or sqrt
int main()
{
    float A,a;//using float bec we can get the value in decimal also
    printf("enter side a=");
    scanf("%f",&a);
    A=pow(a,2);//for power we use pow(x,2) where 2 is the power on x
    printf("Area=%f",A);
    return 0;
}