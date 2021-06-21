#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,arr[100],small,large,position1=0,position2=0;
    printf("enter the value of n");
    scanf("%d",&n);
     printf("enter the terms");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(i==0){
        small=large=arr[i];
    }
    if(arr[i]<small)
        small=arr[i];

    else if(arr[i]>large)
        large=arr[i];
   }
    for(int i=0;i<n;i++){
        if(small==arr[i]){
            position1=i;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(large==arr[i]){
            position2=i;
            break;
        }
    }


    int temp1=arr[position1];
    int temp2=arr[position2];
    arr[position1]=temp2;
    arr[position2]=temp1;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
