#include<stdio.h>

int main(){
int marks[4][3],i,j,maxmarks;
for(int i=0;i<4;i++){
    printf("enter the marks obtained by student %d ",i);
    for(int j=0;j<3;j++){
        printf("\nmarks[%d][%d]",i,j);
        scanf("%d",&marks[i][j]);
    }
}
for(int j=0;j<3;j++){
    maxmarks=marks[0][j];
    for(int i=0;i<4;i++){
        if(marks[i][j]>maxmarks)
            maxmarks=marks[i][j];
    }
    printf("\nthe highest marks obtained in the subject %d=%d",j,maxmarks);
}
return 0;
}
