#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /* List of possible secret words */
    const char wordList[10][6] = {
        "apple", "grape", "pearl", "chair", "spoon",
        "flame", "stone", "truck", "beach", "cloud"
    };

    /* determining variables */
    char myWord[6];
    char guess[6];
    char clue[6] = {'x', 'x', 'x', 'x', 'x', '\0'};
    int roundsLeft = 5;

    /* seed the random number generator */
    srand(time(NULL));

    /* randomly pick one word */
    int randomIndex = rand() % 10;  // adjust if you change wordList size
    strcpy(myWord, wordList[randomIndex]);

    printf("A secret 5-letter word has been chosen!\n");

    /* gameplay loop */
    while (roundsLeft != 0 && strcmp(clue, "+++++") != 0) {
        printf("\nYou have %d rounds left. Please guess a 5-letter word:\n", roundsLeft);
        scanf("%s", guess);

        if (strlen(guess) != 5) {
            printf("Your guess must be 5 letters!\n");
            continue;
        }

        if (strcmp(myWord, guess) == 0) {
            printf("You win! The word was %s\n", myWord);
            return 0;
        }

        // Reset clue each round
        for (int i = 0; i < 5; i++) {
            clue[i] = 'x';
        }

        // Correct letters in correct places
        for (int i = 0; i < 5; i++) {
            if (guess[i] == myWord[i]) {
                clue[i] = '+';
            }
        }

        // Correct letters in wrong places
        for (int i = 0; i < 5; i++) {
            if (clue[i] == 'x') {
                for (int j = 0; j < 5; j++) {
                    if (guess[i] == myWord[j] && guess[i] != myWord[i]) {
                        clue[i] = '-';
                        break;
                    }
                }
            }
        }

        printf("Clue: %s\n", clue);
        roundsLeft--;
    }

    printf("You've lost. The word was %s\n", myWord);
    return 0;
}