#include<stdio.h>
void divby5()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%2==0)
        {
            printf("%d it is an evenly divisible by 5",n);
        }
        else
        {
            printf("%d is divisible by 5 but odd",n);
        }
    }
    else
    {
        printf("%d is not divisible by 5",n);
    }
}
int main()
{
    void divby5();
    divby5();
    return 0;
}