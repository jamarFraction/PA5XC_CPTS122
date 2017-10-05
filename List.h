#ifndef List_h
#define List_h

#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

typedef struct listnode{
    
    string date;
    string planName;
    int goal;
    listnode *nextDay;
    

}ListNode;

class List{
    
    private:
    ListNode *pHead;
    ListNode *pTail;
    
    public:
    //*******************************************************************************
    //*******************************************************************************
    //Constructors
    //Default constructor.. will get it's default values from the default ListNode constructor
    List(){
        
        pHead = NULL;
        pTail = NULL;
        
        
    }
    
    //copy constructor
    List(List &copyList){
        
        //point this node's head to the passed in copyList head
        pHead = copyList.pHead;
        
        //point this node's tail to the passed in copyList tail
        pTail = copyList.pTail;
        
    }
    //*******************************************************************************
    //*******************************************************************************
    //Deconstructors
    
    //default desconstructor
    ~List(){
        
        //free the space..
        //is this neccessary?
        free(pHead);
        free(pTail);
    }
    //*******************************************************************************
    //*******************************************************************************
    //Setters
    void Add(ListNode newDay){
        
        //Adding to an empty list
        if(pHead == NULL && pTail == NULL){
        
            //point the head pointer to the address of the passed in ListNode
            pHead = &newDay;
            
            //point the tail pointer to the address of the passed in ListNode
            pTail = &newDay;
            
        }else{
            //adding to non-empty list
            //inset at pTail
            
            //set the current pTail's pNext to the passed in ListNode
            pTail->nextDay = &newDay;
            
            //point pTail to the passed in ListNode
            pTail = &newDay;
            
        }
        
    }
    //*******************************************************************************
    //*******************************************************************************
    //Getters
    
    
    
    
    
    
    
    
    //*******************************************************************************
    //*******************************************************************************

    
    
};

//non-member
ListNode *makeNode(string planName, int goal, string date);
ListNode *makeNode();

#endif /* List_h */


//class ListNode{
//
//    //declaring what are supposed to be private data members.. we will see
//    private:
//    string date;
//    string planName;
//    int goal;
//    ListNode *nextDay;
//
//    public:
//    //****************************************************************************
//    //****************************************************************************
//    //constructors
//
//    //default
//    ListNode(ListNode *newDay = NULL, string newDate = "", string newPlanName = "", int newGoal = 0);
//
//
//
//    //copy constructor
//    ListNode(ListNode &passedNode){
//
//        //setting the date via the setter functions for the Date, PlanName, and Goal
//        SetDate(passedNode.date);
//        SetPlanName(passedNode.planName);
//        SetGoal(passedNode.goal);
//
//
//    }
//
//    //****************************************************************************
//    //****************************************************************************
//    //destructors
//    ~ListNode(){
//
//        //still have no idea what we're supposed to be putting in here
//        //but I did it!
//
//    }
//    //****************************************************************************
//    //****************************************************************************
//    //Getters
//
//    //getter for the date
//    string GetDate(){
//
//        //return the value of the private data member
//        return date;
//
//    }
//
//
//    //getter for the plan name
//    string GetPlanName(){ return planName; }
//
//
//    //getter for the goal
//    int GetGoal(){ return goal; }
//
//    //****************************************************************************
//    //****************************************************************************
//    //Setters
//
//    //setter for the date
//    void SetDate(string passedDate){
//
//        //set the private variable to the integer passed as an argument
//        date = passedDate;
//
//    }
//
//    //setter for the plan name
//    void SetPlanName(string passedPlanName){ planName = passedPlanName; }
//
//
//    //setter for the goal
//    void SetGoal(int passedGoal){ goal = passedGoal; }
//    //****************************************************************************
//    //****************************************************************************
//};
