//
//  main.c
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/11/2014.
//  Copyright (c) 2014 John Malcolm Anderson. All rights reserved.


#include "mastermindHeader.h"

int main(void)
{
    int play = 0;
    do {
        newGame();
        
        while (getchar() != '\n');
        printf("Play Again? (y/n)");
        play = getchar();
        while (getchar() != '\n');
        
    } while (play == 'y');
    
    
    system("pause");
    return(0);

} // end of main


