#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter 3 integer numbers:");
    // scanf(stringOfFormat,&variable1,&variable2,&variable3);
    // scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    scanf("%d%d%d",&a,&b,&c);       //enter 3 numbers with 1 scanf, press enter or space to confirm enter
    // scanf("%d,%d,%d",&a,&b,&c);      //enter 3 numbers with 1 scanf, press , to confirm enter    (different numbers are seperated by ,)

    // printf(stringOfFormat,variable1,variable2,variable3);
    printf("a=%d,b=%d,c=%d\n",a,b,c);

    return 0;
}