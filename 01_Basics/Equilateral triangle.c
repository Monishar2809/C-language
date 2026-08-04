#include<stdio.h>
#include<math.h>
int main()
{
    float a,Area;
    printf("enter a=");
    scanf("%f",&a);
    Area=sqrt(3)*pow(a,2)/4;
    printf("Area=%f",Area);
    return 0;
}