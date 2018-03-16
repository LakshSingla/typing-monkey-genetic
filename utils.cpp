#include <cmath>
#include <stdlib.h>
#include <time.h>

#include "utils.h"

using namespace std;
using namespace UTILS;

    float randomize0to1() {
        srand(time(NULL));
        float random = rand() % 10000;
        random /= 10000;
        return random;
    }
    //Includes a-z and <space>
    char randomCharacter(){
        int random = (int)(floor(UTILS::randomize0to1() * (26 + 1))); // 27 options + 1
        if(random >= 0 && random <= 25) return 'A' + random ;
        else return ' ';
    }