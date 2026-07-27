#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGuessingGame() {
    int userGuess;
    // 1. Generate a single random number between 1 and 5 for this round
    int randomNumber = (rand() % 5) + 1;
    
    printf("--- Welcome to the Guessing Game! ---\n");
    printf("I am thinking of a number between 1 and 5. You have 3 chances!\n\n");

    // 2. Loop 3 times for the 3 chances
    for (int chance = 1; chance <= 3; chance++) {
        printf("Chance %d/3 - Enter your guess: ", chance);
        scanf("%d", &userGuess);
        
        // 3. Check the guess
        if (userGuess == randomNumber) {
            printf("🎉 You win! You guessed it right on chance %d.\n", chance);
            return; // Exit the function immediately because they won
        } else {
            printf("❌ 5
            Wrong guess!\n");
        }
    }
    
    // 4. This executes only if the loop finishes without a correct guess
    printf("\n💀 Game Over! You ran out of chances. The correct number was %d.\n", randomNumber);
}

int main() {
    srand(time(0)); // Seed once
    playGuessingGame();
    return 0;
}
