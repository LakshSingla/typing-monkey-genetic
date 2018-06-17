#ifndef CONFIG_H
#define CONFIG_H

#include <string>

namespace CONFIG {
    extern const int populationSize = 2000 ;
    extern const int generations = 1000 ;
    extern const float mutationProbablity = 0.02 ;
    extern const std::string testPhrase = "THIS IS A RANDOM TEST PHRASE";
    extern const int testPhraseLength = testPhrase.length();
}

#endif