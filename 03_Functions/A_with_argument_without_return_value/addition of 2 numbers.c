#include<stdio.h>
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("sum of 2 numbers=%d",z);
}
int main()
{
    int x,y;
    printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    add(x,y);
    return 0;
}
