#include<stdio.h>
void mul()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    c=a*b;
    printf("multiplication of %d and %d is %d",a,b,c);
}
int main()
{
    void mul();
    mul();
    return 0;
}
