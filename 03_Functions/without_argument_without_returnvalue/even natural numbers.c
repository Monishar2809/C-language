#include<stdio.h>
void evennum()
{
    int i,n;
    printf("enter n=");
    scanf("%d",&n);
    printf("even natural numbers till %d=\n",n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}
int main()
{
    void evennum();
    evennum();
    return 0;
}