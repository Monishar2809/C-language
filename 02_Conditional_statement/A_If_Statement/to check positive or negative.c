#include<stdio.h>
int main()
{
    int a;
    printf("enter a=");
    scanf("%d",&a);
    if(a>0)
    {
        printf("a is positive");
    }
    if(a<0)
    {
        printf("a is negative");
    }
    return 0;
}