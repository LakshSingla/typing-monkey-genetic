#ifndef SPECIES_H
#define SPECIES_H
#include <string>

using namespace std;

class Species {
    private:
    float fitness; 
    string DNA;
    public:
    Species() {}
    Species(string d, int f)  {setDNA(d);}
    void setDNA(string d) {DNA = d;}
    string getDNA() const {return DNA;}
    float setRawFitness();
    void normalizeFitness(int max){ fitness /= max;}
    int getFitness() const {return fitness;}
    void mutation();
    Species operator +  (Species);
    char& operator [] (int);
};

#endif