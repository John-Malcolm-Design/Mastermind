//
//  newGame.c
//  Mastermind
//
//  Created by John Malcolm Anderson on 05/01/2015.
//  Copyright (c) 2015 John Malcolm Anderson. All rights reserved.
//

#include "mastermindHeader.h"

void newGame(){
    headerAndLevelChoice();
    getRandomSequence();
    guess();
}
