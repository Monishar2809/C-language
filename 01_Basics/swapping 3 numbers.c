#include<stdio.h>
int main()
{
    int a,b,c,temp;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    printf("before swapping a=%d,b=%d,c=%d\n",a,b,c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("after swapping a=%d,b=%d,c=%d",a,b,c);
    return 0;
}