#include<stdio.h>
void swap()
{
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d and b=%d",a,b);
}
int main()
{
    void swap();
    swap();
    return 0;
}