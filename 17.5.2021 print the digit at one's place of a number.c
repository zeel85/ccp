#include<stdio.h>
#include<conio.h>

int main()
{

    int a,digit;
    printf("enter any number");
    scanf("%d",&a);
    digit=a%10;
    printf("the digit at ones place of %d is %d",a,digit);
    return 0;
}
