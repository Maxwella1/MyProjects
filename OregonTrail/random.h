#ifndef RANDOM_H
#define RANDOM_H
// This is the header file where we call the random function from
#include <iostream>

using namespace std;

class randomGen {
    public:
        // function used to get a random number
        int random(int num1, int num2) {
            srand (time(NULL));
            return rand() % num2 + num1;
        }
};

randomGen number;

#endif