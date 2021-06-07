#include<stdio.h>
#include<math.h>

int coefficient(int a,int b,int c,int d,int r1,int r2)
{
if(d==0)
{
    printf("real and equal roots");
    printf("%d",-b/(2*a));
}
else
{
    if(d>0)
    {
        printf("real and unequal");
    r1= (-b+sqrt(b*b-4*a*c))/(2*a);
   r2= (-b-sqrt(b*b-4*a*c))/(2*a);
    printf("roots are %d and %d",r1,r2);
    }
    else
        printf("roots are imaginary");
}
}
int main()
{
    int a,b,c,r1,r2,d;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    coefficient(a,b,c,d,r1,r2);
    return 0;
}
