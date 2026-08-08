#include<stdio.h>
int main()
{
    char name[100];
    int m1,m2,m3,total;
    float avg;
    printf("enter the name of the student=");
    scanf("%s",name);
    printf("enter the marks of 3 subjects=");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    if(m1<35||m2<35||m3<35)
    {
        printf("fail");
    }
    else if(avg>=35 )
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}