//
//  headerAndLevelChoice.c
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/01/2015.
//  Copyright (c) 2015 John Malcolm Anderson. All rights reserved.
//

#include "mastermindHeader.h"

void headerAndLevelChoice(){
    
    // User level choice integer
    iUserChoice = 0;
    
    srand((int)time(NULL)); // Sets the random seed value for the rand() function
    
    // Header
    printf("***************************************************************************\n");
    printf("*                                                                         *\n");
    printf("*                          M A S T E R M I N D                            *\n");
    printf("*                                                                         *\n");
    printf("*                         by John Malcolm Anderson                        *\n");
    printf("*                                  2015                                   *\n");
    printf("*                                                                         *\n");
    printf("*                https://github.com/johnmalcolm/Mastermind                *\n");
    printf("*                                                                         *\n");
    printf("***************************************************************************\n\n");
    printf("Mastermind is a game where the object is to\n");
    printf("guess the order of four prearranged pegs\n");
    printf("that are generated randomly by the computer.\n");
    printf("A white peg indicates a correct colour in the wrong position.\n");
    printf("A black peg indicates a correct colour in the correct position.\n\n");

    printf("Levels:\n");
    printf("1: Easy – 4 colours with no repeats or blank spaces.\n");
    printf("2: Medium – 4 colours with repeats, but no blank spaces.\n");
    printf("3: Hard – 4 colours with repeats and blanks spaces as options.\n\n");
    
    printf("Peg Color Codes:\n");
    printf("  R = Red\n");
    printf("  V = Violet\n");
    printf("  G = Green\n");
    printf("  B = Blue\n");
    printf("  I = Indigo\n");
    printf("  0 = Orange\n");
    printf("  Y = Yellow\n");
    printf("  S = Blanks (Only in Hard!)\n\n");
    
    printf("Pegs Indicators:\n");
    printf("  W = White. \n");
    printf("  B = Black. \n\n");
    
    //Gets the user selection for the level
    do {
        printf("Choose a level (1, 2 or 3): ");
        iUserChoice = getchar();
        while (getchar() != '\n');
        
    } while (iUserChoice !=49 && iUserChoice !=50 && iUserChoice !=51);

}
