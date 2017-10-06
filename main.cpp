#include "List.h"
#include "DietPlan.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using ListNode = List::ListNode;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //Menu option worker variable
    int option = 0;
    
    do{
        
        cout << "MENU\n1. Read in Diet Plan\n2. Oh, Don't be a jerk and press 2\n3. Exit"<< endl;
        cin >> option;
        
        if(option == 1){
            
            //Start weekly plan read-in
            ifstream input("dietPlans.txt");
            
            if (input.is_open()) // were we successful in opening the stream?
            {
                
                //Create a new DietPlan object
                DietPlan currentPlan;
                
                //Send the stream and the list to the processor function
                currentPlan.CreatePlan(input);
                
                cout << "all done."<<endl;
                
                
                
//                input >> r1; // we overloaded the stream extraction (>>)
//                // operator to work with Rational objects
//                cout << r1.getNumerator() << "/" <<
//                r1.getDenominator() << endl;
            }
            
            
        }else if(option == 2){
            
        }
        
        
        
        
    }while(option != 3);
    
    
    
    
    
    
    
   // List newList;
    
//    DietPlan newPlan;
//
//    ListNode *newNode = makeNode("Week 1", 1000, "10/20/2017");
//
//    ListNode *newNode2 = makeNode("Week 1", 2000, "10/21/2017");
//
//    ListNode *newNode3 = makeNode("Week 1", 2000, "10/22/2017");
//
//    newPlan.Add(newNode);
//
//    newPlan.Add(newNode2);
//
//    newPlan.Add(newNode3);
    
    
    
    //newPlan.Add(*makeNode("Week 1", 1000, "10/20/2017"));
    
    
    //newPlan.Add(*makeNode("Week 1", 2000, "10/21/2017"));
    
    
//    newList.Add(*makeNode("Week 1", 1000, "10/20/2017"));
//
//    newList.Add(*makeNode("Week 1", 1000, "10/21/2017"));
    
    
    
    
    
    //newList.Add(*newNode);
    
   // system("pause");
    
    
    //List newList();
    
    //
    
  
    
//    string date = newNode.GetDate();
//    
//    int newGoal = newNode.GetGoal();
    
    
    
    
    
    
    return 0;
}
