#include<stdio.h>
void num()
{
    int n,i;
    printf("enter n=");
    scanf("%d",&n);
    printf("natural numebers till %d=\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    void num();
    num();
    return 0;
}