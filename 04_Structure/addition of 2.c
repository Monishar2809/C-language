#include<stdio.h>
 struct Add
 {
    int a,b,c;
 };
 int main()
 {
    struct Add t;
    printf("Enter a");
    scanf("%d",&t.a);
    printf("Enter b");
    scanf("%d",&t.b);
    t.c=t.a+t.b;
    printf("sum of two nos =%d",t.c);
    return(0);
 }
