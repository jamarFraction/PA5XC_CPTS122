#include "List.h"

ListNode *makeNode(string planName, int goal, string date){

    //declare and allocate space for a new ListNode
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));

    //initialize the values of the new ListNode to the passed in ListNode values
    newNode->planName = planName;
    newNode->goal = goal;
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
    newNode->goal = 0;
    newNode->planName = "";
    newNode->nextDay = NULL;

    //return the new ListNode
    return newNode;

}

