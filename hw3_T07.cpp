//******************************************************************************
// Team # 07 CSCI/CMPE 1370 Spring2020 Homework # 3
// Christopher Hinkle
// Liana Munoz
// Program to add or subtract any two rational numbers. It returns fractions in their most simple forms.
//
//******************************************************************************

#include <iostream>
#include <string>
#include "homework3functions.h"
using namespace std;

int main(){
    char choice_1[1];
    char choice_2[1];
    bool switch_1 = 1, switch_2 = 1;

    //switches allow the program to prompt multipal times if it gets a bad input.

    while(switch_2 == 1){

        switch_2 = 0;

        //shows user options
        showmenu();

        while(switch_1 == 1){ 

            cin.get(choice_1, 2);
            cin.ignore(1);
    
            if((choice_1[0] == 'A') || (choice_1[0] == 'a')){
                switch_1 = 0;
                add();
            }
            else if( (choice_1[0] == 'S') || (choice_1[0] == 's') ){
                switch_1 = 0;
                subtract();
            }
            else if( (choice_1[0] == 'Q') || (choice_1[0] == 'q') ){
                cout << "Thank You!" << endl;
                return 0;
            }
            else{
                switch_1 = 1;
                cout << "Please try again." << endl;
            }
        }

        switch_1 = 1;

        cout << "Would you like to preform additional opperations? (Y/N)" << endl;

        cin.get(choice_2, 2);
        cin.ignore(1);
    
        if( (choice_2[0] == 'N') || (choice_2[0] == 'n') ){
            cout << "Thank you!" << endl;
            return 0;
        }
        else{
            switch_2 = 1;
        }
    }
}

/*
PSEUDOCODE
program: rational number calculator
main function{
prompt user for calculation choice, prompt user to correct errors, ask user if they wish to preform more calculations
}
void add and subtract functions{ // they are indistinguishable from eachother save different text and slightly different mathamatical opperation
prompt user for fractions using GetRational function
send GetRational results through addition/subtraction oppertation functions
call output function
return string to main function
}
void GetRational function{
    request a fraction from user and stores it as a string
    split the string and discard '/'
    convert the two parts of the string into numerator and denominator integers.
}
void AddRational/Subtract rational functions{
    new numerator = ( (num_1 * den_2) (+/-) (num_2 * den_1) );
    new denominator = (den_1 * den_2);
    change pointer values to new values
    call reduce function
    change values in add/subtract function
}
void reduce function{
    use Euclid's algorithim to reduce new numerator and new denominator
    ignore Euclid's algorithim in case it is unneeded
}
void DisplayRational{
    prepare results for return to user
}
*/
