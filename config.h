#ifndef CONFIG_H
#define CONFIG_H

#include <string>

namespace CONFIG {
    const int populationSize = 2000;
    const int generations = 1000;
    const float mutationProbablity = 0.02;
    const std::string testPhrase = "THIS IS A RANDOM PHRASE TO TEST";
    const int testPhraseLength = testPhrase.length();
}

#endif