#include<stdio.h>

int main()
{

    int m,n;
    printf("enter the starting number\n");
    scanf("%d",&m);
    printf("enter the last number\n");
    scanf("%d",&n);
    for(int i=m;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}
