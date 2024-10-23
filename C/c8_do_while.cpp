#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /*
    do{
        operation;
    }while(condition);
    */
    
    // do{
    //     printf("hello\n");
    // }while (0);
    srand(time(NULL));
    
    int user,computer,option;
    do{
        printf("please choose:1-rock 2-paper 3-scissor：");
        scanf("%d",&user);
        switch (user){
            case 1:
                printf("you choose rock\n");
                break;
            case 2:
                printf("you choose paper\n");
                break;
            default:
                printf("you choose scissor\n");
        }
        computer = rand() % 3 + 1;

        switch (computer){
            case 1:
                printf("computer choose rock\n");
                break;
            case 2:
                printf("computer choose paper\n");
                break;
            default:
                printf("computer choose scissor\n");
        }

        if(user==computer){
            printf("it's a tie\n");
        }else if(user==1 && computer==2
            || user==2 && computer==3
            || user==3 && computer==1){
            printf("sorry, you lose\n");
        }else{
            printf("congratulations, you won\n");
        }
        printf("do you want to play again? 1-yes, other number-no:");
        scanf("%d",&option);

    }while(option==1);

    return 0;
}