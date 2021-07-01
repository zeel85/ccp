#include<stdio.h>

int main(){
int a[2][3],b[2][3],c[2][3];
printf("enter the value of matrices a");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter the value of matrices b");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d",c[i][j]);
    }
    printf(" ");
}
return 0;
}
