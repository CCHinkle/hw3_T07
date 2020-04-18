#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "hw3functions.h"
using namespace std;

int main (){
    bool start = true;
    char o,u;

while (start){
    showmenu();
    cin >> 0;

if (o=='A' || o=='a'){
    addition ();
}
if (o=='S' || o=='s'){
    subtraction (); 
}
if (o=='q' || o=='Q'){
    quit ();
}

cout << "Would you like to try another operation? (y/n)" << '\n';
cin >> u;
'\n';

if (u=='y' || u=='Y'){
    start = true;
    system ("CLS");
    }
else if (u!='y' || u!='Y'){
    start = false;
    quit();
    }
    return 0;
    
}
