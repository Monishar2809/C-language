#include<stdio.h>
void smallest()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("%d is the smallest",a);
    }
    else if(b<a && b<c)
    {
        printf("%d is the smallest ",b);
    }
    else
    {
        printf("%d is the smallest",c);
    }
}
int main()
{
    void smallest();
    smallest();
    return 0;
}