#include "List.h"
using ListNode = List::ListNode;

//copy constructor
List::List(List &copyList){
    
    //point this node's head to the passed in copyList head
    pHead = copyList.pHead;
    
    //point this node's tail to the passed in copyList tail
    pTail = copyList.pTail;
    
}

//Getters
//getter for pHead
ListNode* List::GetHead(){
    
    return pHead;
    
}

//getter for pHead
ListNode* List::GetTail(){
    
    return pTail;
    
}


string List::GetDate(ListNode passedNode){
    
    //return the value of the private data member
    return passedNode.date;
    
}

string List::GetPlanName(ListNode passedNode){
    
    //return the value of the private data member
    return passedNode.planName;
    
}

int List::GetGoalCalories(ListNode passedNode){
    
    //return the value of the private data member
    return passedNode.goalCalories;
}

//Setters

//setter for the head node
void List::SetHead(ListNode *newDay){
    
    pHead = newDay;
    
}

//setter for the tail node
void List::SetTail(ListNode *newDay){
    
    pTail = newDay;
    
}

//Setter for the next day

void List::Add(ListNode *newDay){
    
    //Adding to an empty list
    if(this->GetHead() == NULL && this->GetTail() == NULL){
        
        //point the head pointer to the address of the passed in ListNode
        this->SetHead(newDay);
        
        
        //point the tail pointer to the address of the passed in ListNode
        this->SetTail(newDay);
        
    }else{
        //adding to non-empty list
        //inset at pTail
        
        //set the current pTail's pNext to the passed in ListNode
        this->SetNext(newDay);
        
        //point pTail to the passed in ListNode
        this->SetTail(newDay);
        
    }
    
}


void List::SetNext(ListNode *newDay){
    
    pTail->nextDay = newDay;
    
}


//void List::Add(ListNode newDay){
//    
//    //Adding to an empty list
//    if(pHead == NULL && pTail == NULL){
//        
//        //point the head pointer to the address of the passed in ListNode
//        pHead = &newDay;
//        
//        //point the tail pointer to the address of the passed in ListNode
//        pTail = &newDay;
//        
//    }else{
//        //adding to non-empty list
//        //inset at pTail
//        
//        //set the current pTail's pNext to the passed in ListNode
//        pTail->nextDay = &newDay;
//        
//        //point pTail to the passed in ListNode
//        pTail = &newDay;
//        
//    }
//    
//}

////Non-Member functions
//ListNode *makeNode(string planName, int goal, string date){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//
//    //initialize the values of the new ListNode to the passed in ListNode values
//    newNode->planName = planName;
//    newNode->goal = goal;
//    newNode->date = date;
//    newNode->nextDay = NULL;
//
//    //return the new ListNode
//    return newNode;
//}
//
//ListNode *makeNode(){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//
//    //initialize the values of the new ListNode to the deafault values
//    newNode->date = "";
//    newNode->goal = 0;
//    newNode->planName = "";
//    newNode->nextDay = NULL;
//
//    //return the new ListNode
//    return newNode;
//
//}

