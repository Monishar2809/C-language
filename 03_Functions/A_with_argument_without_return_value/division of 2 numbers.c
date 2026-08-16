#include<stdio.h>
void div(float x,float y)
{
    float z;
    z=x/y;
    printf("divison of %f by %f = %f",x,y,z);
}
int main()
{
    float x,y;
    printf("enter x=");
    scanf("%f",&x);
    printf("enter y=");
    scanf("%f",&y);
    div(x,y);
    return 0;
}