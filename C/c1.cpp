//stdio: standard input output
#include<stdio.h>   //similar to java:  import java.util.Scanner;

//compile              -> run
//shift+command+B      -> open terminal, execute     ./filename    
int main(){
    //short int long        -> integer number
    //float double          -> decimal number
    //char
    //bool
    //byte
    int a = 10;
    float b = 3.14;
    char c = 'w';
    bool d = true;      //0:false  , not 0:true
    printf("hello world\n");
    //placeholder
    //%d -> int             %f  -> float        %c  -> char
    printf("the value in a is %d\n",a); //%d 
    printf("b=%f\n",b);
    printf("b=%.2f\n",b);
    printf("c=%c\n",c);
    printf("d=%d\n",d);
    return 0;
}