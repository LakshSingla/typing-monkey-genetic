#ifndef SPECIES_H
#define SPECIES_H
#include <string>

using namespace std;

class Species {
    private:
    int fitness; 
    public:
    string DNA;
    Species() {}
    Species(string d, int f)  {setDNA(d);}
    void setDNA(string d) {DNA = d;}
    string getDNA() const {return DNA;}
    void setFitness();
    int getFitness() const {return fitness;}
    void mutation();
    Species operator +  (Species);
    char& operator [] (int);
};

#endif