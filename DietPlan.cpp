#include "DietPlan.h"

//Copy Contructor
DietPlan::DietPlan(DietPlan &copyPlan){
    
    //copy over the list.. by value?
    listOfPlans = copyPlan.listOfPlans;
    
}

//void DietPlan::Add(ListNode *newDay){
//    
//    //Adding to an empty list
//    if(listOfPlans.GetHead() == NULL && listOfPlans.GetTail() == NULL){
//        
//        //point the head pointer to the address of the passed in ListNode
//        listOfPlans.SetHead(newDay);
//        
//        //point the tail pointer to the address of the passed in ListNode
//        listOfPlans.SetTail(newDay);
//        
//    }else{
//        //adding to non-empty list
//        //inset at pTail
//        
//        //set the current pTail's pNext to the passed in ListNode
//        listOfPlans.SetNext(newDay);
//        
//        //point pTail to the passed in ListNode
//        listOfPlans.SetTail(newDay);
//        
//    }
//    
//}

void DietPlan::CreatePlan(ifstream &input){
    
    
    
   // for(int i = 0; i < 7;i++){
       
    input >> listOfPlans;
        
    
    
    
    
    
    
}



//Non-Member functions
ListNode *makeNode(string planName, int goal, string date){
    
    //declare and allocate space for a new ListNode
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    
    //initialize the values of the new ListNode to the passed in ListNode values
    newNode->planName = planName;
    newNode->goalCalories = goal;
    newNode->date = date;
    newNode->nextDay = NULL;
    
    //return the new ListNode
    return newNode;
}

ListNode *makeNode(){
    
    //declare and allocate space for a new ListNode
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    
    //initialize the values of the new ListNode to the deafault values
    newNode->date = "";
    newNode->goalCalories = 0;
    newNode->planName = "";
    newNode->nextDay = NULL;
    
    //return the new ListNode
    return newNode;
    
}

ifstream & operator >> (ifstream &lhs, List &rhs){
    

    while(lhs){
        
        string planName = "";
        int goalCalories = 0;
        string date = "";
        string blah = "";
        
        ListNode *newDay;
        
        //Plan name
        std::getline(lhs, planName);
        
        //Goal Calories
        lhs >> goalCalories;
        
        //Date
        lhs >> date;
        
        //ignore the newline character after the date
        lhs.ignore(1024, '\n');
        
        // lhs >> blah;
        
        //get the bank line
        std::getline(lhs, blah);
        
        // lhs.ignore(std::numeric_limits<std::streamsize>::max(), '\n' );
        
        //std::getline(lhs, date);
        
        //send our values to the Node maker function
        newDay = makeNode(planName, goalCalories, date);
        
        //add the newly created Node to the List of daily plans
        rhs.Add(newDay);
        
        //free the memory for newDay as we will be re-allocating new space for a new Node
        //in the next pass of the loop
        //free(newDay);
        
       
        
    }
        
    return lhs;
}

