#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    ch+=32;
    printf("lower case character is %c",ch);
    return 0;
}
