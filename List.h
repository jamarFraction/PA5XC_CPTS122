#ifndef List_h
#define List_h

#include <string>

using std::string;


class List{
    
public:
    
    struct ListNode{
        
        string date;
        string planName;
        int goalCalories;
        ListNode *nextDay;
        
    };
    
    //Constructors
    //Default constructor.. will get it's default values from the default ListNode constructor
    List(){
        
        //default pointers
        pHead = NULL;
        pTail = NULL;
    };
    
    //Copy Constructor
    List(List &copyList);
    
    //Deconstructors
    //default desconstructor
    ~List(){
        
        //free the space..
        //is this neccessary?
        
    }
    
    //Setters
    //Add function for adding new dates
    void Add(ListNode *newDay);
    
    //Setter for the head pointer
    void SetHead(ListNode *newDay);
    
    //Setter for the tail pointer
    void SetTail(ListNode *newDay);
    
    //Setter for the next day
    void SetNext(ListNode *newDay);
    
    
    
    //Getters
    //getter for pHead
    ListNode* GetHead();
    
    //getter for pHead
    ListNode* GetTail();
    
    //getter for the date
    string GetDate(ListNode passedNode);
    
    //getter for the plan name
    string GetPlanName(ListNode passedNode);
    
    //getter for the goal
    int GetGoalCalories(ListNode passedNode);
    
    private:
    ListNode *pHead;
    ListNode *pTail;
    
    
};


#endif /* List_h */

//non-member
//ListNode *makeNode(string planName, int goal, string date);
//ListNode *makeNode();




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
