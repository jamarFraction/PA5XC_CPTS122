#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

class ListNode{
    
    //declaring what are supposed to be private data members.. we will see
    private: string date;
    private: string planName;
    private: int goal;
    private: ListNode nextDay();
    
    public:
    //****************************************************************************
    //****************************************************************************
    //constructors
    
    //default
    ListNode(ListNode &newDay, string newDate = "", string newPlanName = "", int newGoal = 0);
    
    
    
    //copy constructor
    ListNode(ListNode &passedNode){
       
        //setting the date via the setter functions for the Date, PlanName, and Goal
        SetDate(passedNode.date);
        SetPlanName(passedNode.planName);
        SetGoal(passedNode.goal);
        
        
    }
    
    //****************************************************************************
    //****************************************************************************
    //destructors
    ~ListNode(){
        
        //still have no idea what we're supposed to be putting in here
        //but I did it!
        
    }
    //****************************************************************************
    //****************************************************************************
    //Getters
    
    //getter for the date
    string GetDate(){
        
        //return the value of the private data member
        return date;
        
    }
    
    
    //getter for the plan name
    string GetPlanName(){ return planName; }
    
    
    //getter for the goal
    int GetGoal(){ return goal; }
    
    //****************************************************************************
    //****************************************************************************
    //Setters
    
    //setter for the date
    void SetDate(string passedDate){
        
        //set the private variable to the integer passed as an argument
        date = passedDate;
        
    }
    
    //setter for the plan name
    void SetPlanName(string passedPlanName){ planName = passedPlanName; }
    
    
    //setter for the goal
    void SetGoal(int passedGoal){ goal = passedGoal; }
    //****************************************************************************
    //****************************************************************************
};


class List{
    
    private:
    
    
    public:
    ListNode weekDay;
    
    //Default constructor.. will get it's default values from the default ListNode constructor
    List(ListNode());
    
};

class DietPlan{
    
    private:
    //List Week;
    
    public:
    
    //void get(void);
    
    
    
    
};





















#endif /* Header_h */
