#include<stdio.h>
int main()
{
    float sp,cp;
    printf("enter the cost price=");
    scanf("%f",&cp);
    printf("enter the selling price=");
    scanf("%f",&sp);
    if(sp>cp)
    {
        printf("profit=%f",sp-cp);
    }
    else
    {
        printf("loss=%f",cp-sp);
    }
    return 0;
}