#include "ListNode.h"

//getter for the date
string ListNode::GetDate(){
    
    return date;
}

//getter for the plan name
string ListNode::GetPlanName(){
    
    return planName;
    
}

//getter for the goal
int ListNode::GetGoalCalories(){
    
    return goalCalories;
}

//setter for the next Node
void ListNode::SetNext(ListNode *next){
    
    //doing the assignment of this' nextDay to the passed in node pointer
    nextDay = next;
    
}

void ListNode::setDate(string passedDate){
    
    //assign the value of date to the passed in string
    date = passedDate;
    
}

void ListNode::setPlanName(string plan)
{
    
    planName = plan;
    
}

void ListNode::setGoalCalories(int goal){
    
    goalCalories = goal;
    
}
