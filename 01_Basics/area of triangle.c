#include<stdio.h>
#include<math.h>//we use math fuction when we do pow or sqrt
int main()
{
    float s,a,b,c,Area;
    printf("enter a,b,c=");
    scanf("%f,%f,%f",&a,&b,&c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));//for square root we use sqrt(x) where x is the number
    printf("Area=%f\n",Area);
    printf("semi perimeter=%f\n",s);
    return 0;
}
