#ifndef DietPlan_h
#define DietPlan_h

#include "List.h"
#include <fstream>

using std::ifstream;
using ListNode = List::ListNode;

class DietPlan{
    
    private:
    
    
    
    public:
    
    List listOfPlans;
    
    //Defualt constructor
    DietPlan(){
        
        //what to put here?
        
    };
    
    //Destructor
    ~DietPlan(){
        
        
    }
    
    //Copy Constructor
    DietPlan(DietPlan &copyPlan);
    
    //Create Plan
    void CreatePlan(ifstream &input);
};

//non-member
ifstream & operator >> (ifstream &lhs, List &rhs);
ListNode *makeNode(string planName, int goal, string date);
ListNode *makeNode();





#endif /* DietPlan_h */
