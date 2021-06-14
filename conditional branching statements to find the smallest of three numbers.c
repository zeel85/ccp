#include<stdio.h>
#include<conio.h>
#include<math.h>

int smallest(int a,int b,int c)
{
    if(a>b&&c>b)
        return b;
    else if(a>c)
        return c;
    else
        return a;
}

int main()
{
    int a,b,c,j;
    printf("enter the values of 3 number");
    scanf("%d%d%d",&a,&b,&c);
    j=smallest(a,b,c);
    printf("smallest number is %d",j);
    return 0;
}
