#include<stdio.h>
void area(int b,int h)
{
    int a;
    a=0.5*b*h;
    printf("area of triangle=%d",a);
}
int main()
{
    int b,h;
    printf("enter b=");
    scanf("%d",&b);
    printf("enter h=");
    scanf("%d",&h);
    area(b,h);
    return 0;
}