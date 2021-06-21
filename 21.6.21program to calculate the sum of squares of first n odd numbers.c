#include<stdio.h>

#include<math.h>

int main(){
int n,sum=0,i=0,x;
printf("enter the value of n ");
scanf("%d",&n);
while(i<n){

            x=2*i+1;
       if(x%2!=0){
            sum=sum+pow(x,2);

    i++;
    continue;
    }
    i++;

}


        printf("sum is %d",sum);

}

