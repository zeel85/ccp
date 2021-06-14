#include<stdio.h>
#include<conio.h>
#include<math.h>

float  sum(float a,float b, float c)
{
   float s=(a+b+c)/2;
   float area=(sqrt(s*(s-a)*(s-b)*(s-c)));
    return area;
}

int main()
{
    float a,b,c,j;
    printf("enter the length of triangle");
    scanf("%f%f%f",&a,&b,&c);
    j=sum(a,b,c);
    printf("area of triangle is %f",j);
    return 0;
}

