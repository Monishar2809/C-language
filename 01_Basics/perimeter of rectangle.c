#include<stdio.h>
int main()
{
    float p,l,b;
    printf("enter length=");
    scanf("%f",&l);
    printf("enter breadth=");
    scanf("%f",&b);
    p=2*(l+b);
    printf("perimeter =%f",p);
    return 0;
}