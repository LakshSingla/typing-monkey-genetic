#ifndef CONFIG_H
#define CONFIG_H

#include <string>

namespace CONFIG {
    float mutationProbablity;
    std::string testPhrase = "THIS IS A RANDOM PHRASE TO TEST";
    int testPhraseLength = testPhrase.length();
}

#endif