//
//  mastermindHeader.h
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/01/2015.
//  Copyright (c) 2015 John Malcolm Anderson. All rights reserved.
//

#ifndef Mastermind_mastermindHeader_h
#define Mastermind_mastermindHeader_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void newGame();
void headerAndLevelChoice();
void getRandomSequence();
void guess();

char randomFour[];
int iUserChoice;
int guessesTaken;
char firstName[];
char lastName[];

#endif
