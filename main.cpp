//Standard C++ Libraries
#include <iostream>

//User Libraries
#include "species.h"
#include "config.h"
#include "utils.h"

//Global Variables
Species population[CONFIG::populationSize];
Species offspring[CONFIG::populationSize];
float matingPool[CONFIG::populationSize];

//Function Declarations
void initPopulation();
void setPopulationFitness();
void matePopulation();
int returnFitSpecies();

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
    float totalFitness = 0;
    for(int i = 0; i < CONFIG::populationSize; i++) {
        totalFitness += population[i].setRawFitness();
    }
    for(int i = 0; i < CONFIG::populationSize; i++) population[i].normalizeFitness(totalFitness);
}

void setMatingPool() {
    float cumulativeProb = 0;
    for(int i = 0; i < CONFIG::populationSize; i++) {
        cumulativeProb += population[i].getFitness();
        matingPool[i] = cumulativeProb;
    }
}

int returnFitSpecies() {
    float random = UTILS::randomize0to1();
    int retVar;
    for(retVar = 0; retVar < CONFIG::populationSize; retVar++) {
        if(random > matingPool[retVar]) continue;
        else return retVar;
    }
    return 0;
}

void matePopulation() {
    Species parentA, parentB;
    Species child;
    for(int i = 0 ; i < CONFIG::populationSize; i++){
        parentA = population[returnFitSpecies()];
        parentB = population[returnFitSpecies()];
        for(int j = 0 ; j < CONFIG::testPhraseLength; j++) {
           child[j] = (UTILS::randomize0to1() < 0.5 ? parentA[j] : parentB[j]); 
        }
        offspring[i] = child;
    }
}

