#include<stdio.h>
#include<conio.h>

int main()
{

    int a,digit,num;
    printf("enter any number");
    scanf("%d",&a);
    digit=a/10;
    num=digit%10;
    printf("the digit at tens place of %d is %d",a,num);
    return 0;
}
