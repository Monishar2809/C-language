#include<stdio.h>
int main()
{
    int x,y,m,n,V;
    printf("enter m=");
    scanf("%d",&m);
    printf("enter n=");
    scanf("%d",&n);
    printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    V=(x+y)/(m*n);
    printf("V=%d",V);
    return 0;
}