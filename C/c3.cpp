#include<stdio.h>

int main(){
    int num1;
    float num2;
    printf("please enter an integer number:");
    // scanf("%d",the address of num);
    scanf("%d",&num1);
    printf("please enter an decimal number:");
    scanf("%f",&num2);
    
    printf("the number you just entered is:%d\n",num1);
    printf("the decimal number you just entered is:%.3f\n",num2);

    /*
        if(statement){
            operations1
        }else{
            operations2
        }
    */
   if(num1>num2){
    printf("num1 is bigger\n");
   }else{
    printf("num1 is not bigger\n");
   }

    //vertify if num1 is even number or not
    if(num1%2==0){
        printf("%d is even number\n",num1);
    }else{
        printf("%d is odd number\n",num1);
    }
    

    return 0;
}