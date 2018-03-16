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
void setPopulationFitness();

//int main() function
int main() {

    return 0;
}

//Function Definitions
void initPopulation() {
    for(int i = 0; i < CONFIG::populationSize; i++) {
        string randomPhrase;
        for(int j = 0 ; j < CONFIG::testPhraseLength; j++) {
            randomPhrase[i] = UTILS::randomCharacter();
        }
        population[i].setDNA(randomPhrase);
    }
}

void setPopulationFitness() {
    float maxFitness;
    maxFitness = population[0].setRawFitness;
    for(int i = 0; i < CONFIG::populationSize; i++) {
        float currentFitness = population[i].setRawFitness();
        if(currentFitness > maxFitness) maxFitness = currentFitness;
    }
    for(int i = 0; i < CONFIG::populationSize; i++) population[i].normalizeFitness(maxFitness);
}