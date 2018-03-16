//Standard C++ Libraries
#include <iostream>

//User Libraries
#include "species.h"
#include "config.h"
#include "utils.h"

//Global Variables
Species population[CONFIG::populationSize];


//Function Declarations
void initPopulation();

//int main() function
int main() {

    return 0;
}

//Function Definitions
void initPopulation() {
    for(int i = 0; i < CONFIG::populationSize; i++) {
        for(int j = 0 ; j < CONFIG::testPhraseLength; j++) population[i][j] = UTILS::randomCharacter();
    }
}
