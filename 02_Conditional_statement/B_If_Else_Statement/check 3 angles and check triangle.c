#include<stdio.h>
int main()
{
    int x,y,z,h;
    printf("enter the 3 angles=");
    scanf("%d,%d,%d",&x,&y,&z);
    h=x+y+z;
    if(h==180)
    {
        printf("triangle possible");
    }
    else 
    {
        printf("triangle not possible");
    }
    return 0;
}