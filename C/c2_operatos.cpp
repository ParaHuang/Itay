#include<stdio.h>

int main(){
    //operators
    //math operator:   +  -   *  /   %
    //relationship operator:  >   >=   <    <=    ==   !=
    //logic operator:   !   &&  ||
    //assigment operator:  =   +=   -=   *=  /=   %=
    int a = 10;
    int b = 3;
    /*
    //10+3=13
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%c%d=%d\n",a,'%',b,a%b);
    float c = (float)a/b;  //  (type)name    cast
    printf("%.2f\n",c);
    */

    printf("%d\n",a>b); //1->true
    printf("%d\n",a<b); //0->false
    printf("\n\n");
    printf("%d\n",a/3>b);

    a+=4;   //a = a+4;
    printf("%d\n",a);

    char c1 = 'w';  //119
    char c2 = 'W';  //87
    int diff = c1-c2;
    printf("%d\n",diff);
    printf("%d\n",c1>c2);   //1:true 0:false

    //0:false   !0 :true
    return 0;
}