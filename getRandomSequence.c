//
//  getRandomSequence.c
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/01/2015.
//  Copyright (c) 2015 John Malcolm Anderson. All rights reserved.
//

#include "mastermindHeader.h"

void getRandomSequence(){
    
    /*
     Switch statements below shuffle an easy, medium or hard array based on the users choice
     and assignes the first 4 characters into the randomFour array instatiated earlier
     */
    int n;
    
    switch(iUserChoice){
        case 49: //1
            
            printf("\n");
            
            char colorsEasy[] = {"RGBOYIV"};
            
            n = 0;
            
            n = strlen(colorsEasy);
            
            while (n > 0)
            {
                int k = 0;              // initialise k
                
                char temp;              // temporarly stores current number in array
                k = (rand() % n);		// generator random number for k such that 0 <= k < n. (used to be: n + 1)
                n--;					// n is now the last pertinent index;
                
                // swap colors[n] with colors[k] (does nothing if k == n).
                temp = colorsEasy[n];			// stores current char (n) in temp
                
                colorsEasy[n] = colorsEasy[k];		// stores random char (found with k) in last position (n)
                colorsEasy[k] = temp;			// stores temp in k (aka - swaps k char with n char)
            }
            
            strncpy(randomFour, colorsEasy, 4);
            
            // printf("%s\n", randomFour); TESTING
            
            break;
            
        case 50: //2
            
            printf("\n");
            
            char colorsMedium[] = {"RRGGBBOOYYIIVV"};
            
            n = 0;
            
            n = strlen(colorsMedium);
            
            while (n > 0)
            {
                int k = 0;              // initialise k
                
                char temp;              // temporarly stores current number in array
                k = (rand() % n);		// generator random number for k such that 0 <= k < n. (used to be: n + 1)
                n--;					// n is now the last pertinent index;
                
                // swap colors[n] with colors[k] (does nothing if k == n).
                temp = colorsMedium[n];			// stores current char (n) in temp
                
                colorsMedium[n] = colorsMedium[k];		// stores random char (found with k) in last position (n)
                colorsMedium[k] = temp;			// stores temp in k (aka - swaps k char with n char)
            }
            
            strncpy(randomFour, colorsMedium, 4);
            
            // printf("%s\n", randomFour); TESTING
            
            break;
            
        case 51: //3
            
            printf("\n");
            
            char colorsHard[] = {"RRGGBBOOYYIIVVSS"};
            
            n = 0;
            
            n = strlen(colorsHard);
            
            while (n > 0)
            {
                int k = 0;              // initialise k
                
                char temp;              // temporarly stores current number in array
                k = (rand() % n);		// generator random number for k such that 0 <= k < n. (used to be: n + 1)
                n--;					// n is now the last pertinent index;
                
                // swap colors[n] with colors[k] (does nothing if k == n).
                temp = colorsHard[n];			// stores current char (n) in temp
                
                colorsHard[n] = colorsHard[k];	// stores random char (found with k) in last position (n)
                colorsHard[k] = temp;			// stores temp in k (aka - swaps k char with n char)
            }
            
            strncpy(randomFour, colorsHard, 4);
            
            printf("%s\n", randomFour); // DEBUG // USE TO DISPLAY RANDOM SEQUENCE FOR TESTING
            
            break;
    }
    
}
