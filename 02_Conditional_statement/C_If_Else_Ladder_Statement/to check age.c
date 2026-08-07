#include<stdio.h>
int main()
{
    int age;
    printf("enter the age=");
    scanf("%d",&age);
    if(age<18)
    {
        printf("child");
    }
    else if(age>=18 && age<60)
    {
        printf("adult");
    }
    else
    {
        printf("senior citizen");
    }
    return 0;
}