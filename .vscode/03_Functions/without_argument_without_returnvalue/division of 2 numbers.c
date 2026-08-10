#include<stdio.h>
void div()
{
    float a,b,c;
    printf("Enter a=");
    scanf("%f",&a);
    printf("Enter b=");
    scanf("%f",&b);
    c=a/b;
    printf("division of %f and %f is %f",a,b,c);
}
int main()
{
    void div();
    div();
    return 0;
}