#include<stdio.h>
void oddeven()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is a even number",n);
    }
    else
    {
        printf("%d is the odd number",n);
    }
}
int main()
{
    void oddeven();
    oddeven();
    return(0);
}