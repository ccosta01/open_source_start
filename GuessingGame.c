include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t tim;
    int playerGuess = -1,triesLeft = 5;

    printf("The computer is now guessing a number between 0 and 20.\n");
    srand((unsigned) time(&tim));
    int randomNum = rand() % 21;

   while(triesLeft > 0){
        printf("You have %d tries left.\nEnter your guess:\n", triesLeft);
        scanf("%d",&playerGuess);
        while(playerGuess > 20 || playerGuess < 0){
            printf("Please enter a number between 0 and 20.\n");
            scanf("%d",&playerGuess);
        }
        if ( playerGuess == randomNum){
            printf("You have found the number!\n");
            printf("The computer's number was: %d\n",randomNum);
            break;
        }
        if (randomNum > playerGuess)
            printf("The number is bigger than your guess.\n");
        else
            printf("The number is smaller than your guess.\n");
        triesLeft--;
   }
   if (triesLeft == 0){
   printf("You have run out of tries. You have lost!\n");
   printf("The computer's number was: %d\n",randomNum);
   }
}
