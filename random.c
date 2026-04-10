#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandom(int min, int max) {
    srand(time(NULL));
    int randomNumber = (rand() % (max - min + 1)) + min; 
    return randomNumber;
}