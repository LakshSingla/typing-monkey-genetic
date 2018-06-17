#include "config.h"
#include "utils.h"
#include "species.h"

void Species :: mutation() {
    for(int i = 0; i < DNA.length(); i++) { 
        float currentProbability = UTILS::randomize0to1() ;
        if(currentProbability < mutationProbablity) {
            DNA[i] = UTILS::randomCharacter();
        }
    }
}

char& Species:: operator [] (int index) {
    return getDNA()[index];
}

Species Species:: operator + (Species spe) {
    Species child;
    for(int i = 0 ; i < DNA.length(); i++) {
        if(UTILS::randomize0to1() > 0.5) child[i] = DNA[i] ;
        else                             child[i] = spe.DNA[i];
    }
    return child;
}

float Species::setRawFitness() {
    fitness = 0;
    for(int i = 0; i < testPhraseLength; i++) {
        if(DNA[i] == testPhrase[i]) fitness++;
    }
    return fitness;
}
