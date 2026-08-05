#include<stdio.h>
int main()
{
    int q,r,a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    q=a/b;
    r=a-(q*b);
    printf("reminder =%d",r);
    return 0;
}