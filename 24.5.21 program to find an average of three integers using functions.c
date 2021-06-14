#include<stdio.h>
#include<conio.h>

int average(int a,int b, int c)
{
    return (a+b+c)/3;
}
int main()
{
    int a,b,c,x,avg=0;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    x=average(a,b,c);
    printf("average of 3 number  is %d",x);
    return 0;
}


