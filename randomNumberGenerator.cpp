//
//  randomNumberGenerator.cpp
//  First
//
//  Created by Liam on 21/12/2015.
//  Copyright © 2015 Liam. All rights reserved.
//

#include "randomNumberGenerator.h"

int randonNumberGenerator()
{
    srand(static_cast<unsigned int>(time(0)));       // The seed number for the random number generator must be specified prior to program launch.
    
    int rangeMinimum = 0;   // The minimum and maximum of the range of random numbers to be used needs to be set prior to program launch.
    int rangeMaximum = 100;
    
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // Static used for efficiency, so we only calculate this value once.
    
    rand(); // There is a possible flaw that required rand() to be called at least once before being used in the return statement overwise
            // it keeps giving the same number.
    
    return static_cast<int>(rand() * fraction * (rangeMaximum - rangeMinimum + 1) + rangeMinimum);  // Evenly distribute the random number across our range.
}
