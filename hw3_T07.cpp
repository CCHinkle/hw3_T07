//******************************************************************************
// Team # 07 CSCI/CMPE 1370 Spring2020 Homework # 3
// Christopher Hinkle
// Liana Munoz
// ""DESCRIPTION""
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "Fun.h"

// get rid of _1 on switch if we only use 1
int main(){
    char choice[1];
    bool switch_1 = 1;

    //shows user options
    showmenu();

    while(switch_1 == 1){ // I'm not sure why this loop is terminating while switch_1 != 0

        cin.get(choice, 2);
    
        if((choice[0] == 'A') || (choice[0] == 'a')){
            !switch_1;
            add();
        }
        else if( (choice[0] == 'S') || (choice[0] == 's') ){
            !switch_1;
            subtract();
        }
        else if( (choice[0] == 'Q') || (choice[0] == 'q') ){
            cout << "Thank You!" << endl;
            return 0;
        }
        else{
            cout << "Please try again." << endl;
        }
    }
    
    // find a way to ask if the user wants to repeat

    return 0;
}
