//
//  guess.c
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/01/2015.
//  Copyright (c) 2015 John Malcolm Anderson. All rights reserved.
//

#include "mastermindHeader.h"

int colorFlag = 0;

void colorValidation(char currentGuess);

void guess(){
    // Number of user guesses
    int noOfGuesses;
    
    // Array for the users current guess
    char currentGuess;
    
    // Gets number of guesses off user and assigns to 'noOfGuesses'
    printf("Enter number of guesses: ");
    scanf("%d", &noOfGuesses);
    
    while (noOfGuesses > 15 || noOfGuesses < 1) {
        printf("\nNumber of guesses must be between 1 and 15.\n");
        printf("Enter number of guesses: ");
        scanf("%d", &noOfGuesses);
    }
    
    // Inializes the guesses array
    char guesses[5] = {' ',' ',' ',' '};
    char win[5] = {'B','B','B','B'};
    
    guessesTaken = 0;
    
    // Loops through until the number of guesses left is zero
    while (noOfGuesses > 0) {
        
        // Iniatializes J to zero
        int j = 0;
        
        printf("\nSequence %d.\n", noOfGuesses);
        
        // Loops through the enture randomFour array and updates guesses array with appropriate pegs
        while (j < 4) {
            
            while (getchar() != '\n');
            printf("Enter color %d: ", j + 1);
            char caseInsensitive = getchar();
            currentGuess = toupper(caseInsensitive);
    
            colorValidation(currentGuess);
            
            while (colorFlag != 1) {
                while (getchar() != '\n');
                printf("Please enter a valid color.\n");
                printf("See instructions above!\n\n");
                printf("Enter color %d: ", j + 1);
                char caseInsensitive = getchar();
                currentGuess = toupper(caseInsensitive);
                
                colorValidation(currentGuess);
            }
            
            if (randomFour[j] == currentGuess) {
                guesses[j] = 'B';
            } else {
                
                int index = 0;
                
                while (index < 4) {
                    if (randomFour[index] == currentGuess) {
                        guesses[j] = 'W';
                    }
                    index++;
                }
            }
            
            j++;
            guessesTaken++;
        }
        
        int n = 0;
        
        n = strlen(guesses);
        
        while (n > 0)
        {
            int k = 0;              // initialise k
            
            char temp;              // temporarly stores current number in array
            k = (rand() % n);		// generator random number for k such that 0 <= k < n. (used to be: n + 1)
            n--;					// n is now the last pertinent index;
            
                                        
            temp = guesses[n];			// stores current char (n) in temp
            
            guesses[n] = guesses[k];	// stores random char (found with k) in last position (n)
            guesses[k] = temp;			// stores temp in k (aka - swaps k char with n char)
        }
        
        noOfGuesses--;
        printf("\nPegs: %s\n", guesses); // +DEBUG
        
        int check = strcmp(win, guesses);
        
        if (check == 0) {
            
            printf("YOU WON!! WAHOO!! \n");
            
            while (getchar() != '\n');
            printf("\nFirst Name: ");
            scanf("%s", firstName);
            
            while (getchar() != '\n');
            printf("Last Name: ");
            scanf("%s", lastName);
            
            printf("\nGood game %s %s", firstName, lastName);
            printf("\nIt only took %d guesses.\n\n", guessesTaken + 1);
            
            break;
        }
        
        if (noOfGuesses == 0) {
            printf("\nYou are out of turns :( ");
            printf("\nGood game though!\n");
            break;
        }
        
    }
}

void colorValidation(char currentGuess){
    
    colorFlag = 0;
    
    switch (currentGuess) {
        case 'R':
            colorFlag = 1;
            break;
            
        case 'V':
            colorFlag = 1;
            break;
            
        case 'G':
            colorFlag = 1;
            break;
            
        case 'B':
            colorFlag = 1;
            break;
            
        case 'I':
            colorFlag = 1;
            break;
            
        case 'O':
            colorFlag = 1;
            break;
            
        case 'Y':
            colorFlag = 1;
            break;
            
        case 'S':
            colorFlag = 1;
            break;
    }

}


