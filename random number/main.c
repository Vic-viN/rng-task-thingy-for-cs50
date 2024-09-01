#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int tries,userinput,rng = 0;
    printf("%d\n",rng);
    printf("Hello, and welcome to this RNG game\n");
    printf("You will have to guess a randomly generated number from to 100\n");
    printf("if you guess the number incorrectly, the game will tell you if you are closer or not\n");
    do{
            printf("What is your guess? \n");
            scanf("%d", &userinput);
            tries++;
            if (userinput > rng) {
                printf("try going lower \n");
            }else if(userinput < rng){
                printf("try going higher \n");
            }else{
                printf("Nice, you got it\n");
                printf("Trials : %d\n",tries);
                break;
            }
    }
    while(1);
    return 0;
}

/*
Develop a Guess game
which do the following:
-Generate random number between 1 and 100
-Take input from user until he guesses the correct answer
-Inform the user whether his guess is less than or greater than the generated number
-If the user guess is correct stop taking input, congratulate the user, and print the NO. of trials he made to get the correct answer
*/
