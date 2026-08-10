#include<stdio.h>
void swap()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    printf("before swapping a=%d , b=%d and c=%d\n",a,b,c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("after swapping a=%d ,b=%d and c=%d",a,b,c);
}
int main()
{
    void swap();
    swap();
    return 0;
}