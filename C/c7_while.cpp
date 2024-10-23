#include<stdio.h>

int main(){
    /*
    //print 1,2,3...98,99,100
    //print 1,3,5...99
    int i=1;            //1.initialize a loop variable
    while(i<=100){        //2.condition
        printf("%d\n",i);
        i+=2;   //i++;            //3.increment
    }
    */
    //print all the leap year inside of 2000(included)
    int i=1;            
    while(i<=2000){  
        if(i%4==0 && i%100!=0 || i%400==0){   
            printf("%d is leap year\n",i);
        }
        i++;            
    }



    return 0;
}