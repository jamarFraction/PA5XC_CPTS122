#ifndef FitnessAppWrapper_h
#define FitnessAppWrapper_h

#include "DietPlan.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

class FitnessAppWrapper{

    private:
    
    public:
    DietPlan weeklyDietPlan;
    
    
    //required functions
    void runApp (void);

};
#endif /* FitnessAppWrapper_h */
