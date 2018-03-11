#ifndef SPECIES_H
#define SPECIES_H
#include <string>

using namespace std;

class Species {
    private:
    string DNA;
    int fitness; 
    public:
    Species() {}
    Species(string d, int f)  {setDNA(d), setFitness(f);}
    void setDNA(string d) {DNA = d;}
    string getDNA() const {return DNA;}
    void setFitness(int f) {fitness = f;}
    int getFitness() const {return fitness;}
    void mutation();
    Species operator +  (Species);
    char& operator [] (int);
};

#endif