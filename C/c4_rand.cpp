#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //plant a time seed
    srand(time(NULL));
    //0~5
    // int num = rand()%6;
    //0~2   +  1   -> 1~3
    int num = rand()%3+1;
    printf("%d\n",num);

    return 0;
}