#include<stdio.h>
struct Division 
{
    int a,b;
    float c;
};
int main()
{
    struct Division t;
    printf("enter a=");
    scanf("%d",&t.a);
    printf("enter b=");
    scanf("%d",&t.b);
    t.c=t.a/t.b;
    printf("division of 2 =%f",t.c);
    return 0;
}