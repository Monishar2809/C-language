#include<stdio.h>
void swap()
{
    int a,b,c,d;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    printf("before swapping a=%d,b=%d,c=%d\n",a,b,c);
    d=a;
    a=c;
    c=b;
    b=d;
    printf("after swapping a=%d,b=%d,c=%d",a,b,c);
}
int main()
{
    void swap();
    swap();
    return 0;
}