// project1
// A simple and fun Number guessing game written in c . The program generates a random number , and the player has to guess it in as few attempts as possible .
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // NUMBER GUESSING GAME

    srand(time(NULL));  // Good: Seeds the RNG with current time for randomness.

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;  // Excellent: This formula ensures a uniform random number in the range [min, max].

    printf("*** NUMBER GUESSING GAME ***\n");

    do{
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess < answer){
            printf("TOO LOW!\n");
        }
        else if(guess > answer){
            printf("TOO HIGH!\n");
        }
         else{
            printf("CORRECT!\n");
        }

    }while(guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);  // Minor: Missing newline (\n) at the end—could cause output issues in some terminals.

    return 0;
}
