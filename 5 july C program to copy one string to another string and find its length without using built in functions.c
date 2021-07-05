#include <stdio.h>
int main()
{

    char s1[100] , s2[100], i;


    printf("enter the string s1");
  scanf("%s",s1);
  printf("enter the string s2");
  scanf("%s",s2);


    for (i = 0; s1[i] != '\0'; ++i) {

        s2[i] = s1[i];
    }

    s2[i] = '\0';


    printf("String s2 : %s\n", s2);

printf("Length of new copied String is %d",i);
    return 0;
}

