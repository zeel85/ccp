#include<stdio.h>
#include<conio.h>

int main()
{
    float fahrenheit,celsius;
    printf("enter the temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius=((fahrenheit-32)*5)/9;
    printf("%.2f",celsius);
    return 0;
}


