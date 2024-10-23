#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // when the possible value of expression are limit
    // switch...case...
    /*
    switch(expression){
        case result1:
            operationA;
            break;
        case result2:
            operationB;
            break;
        case result3:
            operationC;
            break;
        default:
            operationD;
    }
     */
    // draw a lottery
    // generate a random number from 1-15
    // 1: you won $1000
    // 2,7: you won $500
    // 6,8,10:you won $100
    // rest numbers:sorry, you didnt get luck   (9numbers)
    srand(time(NULL));
    int draw = rand() % 15 + 1;
    // int draw = 2;
    printf("%d\n", draw);
    /*
    if(draw==1){
        printf("you won $1000\n");
    }else if(draw==2 && draw==7){
        printf("you won $500\n");
    }else if(draw==6 && draw==8 && draw==10){
        printf("you won $100\n");
    }else{
        printf("sorry, you didnt get luck\n");
    }*/
    switch (draw){
        case 1:
            printf("you won $1000\n");
            break;
        case 2:
        case 7:
            printf("you won $500\n");
            break;
        case 6:
        case 8:
        case 10:
            printf("you won $100\n");
            break;
        default:
            printf("no luck\n");
    }
    return 0;
}