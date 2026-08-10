#include<stdio.h>
void biggest()
{
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is the biggest ",a);
    }
    else if (b>a)
    {
        printf("%d is the biggest ",b);
    }
    else
    {
        printf("%d and %d both are equal ",a,b);
    }
}
int main()
{
    void biggest();
    biggest();
    return 0;
}