#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

void showmenu(){
    cout << "Rational Numbers Calculator" << '\n';
    '\n';
    cout << "(A)ddition" << '\n' << "(S)ubtraction" << '\n' << "(Q)uit" << '\n';
    '\n';
    cout << "Enter your option:  ";
}

void GetRational (int num, int den){
    bool start = true;
    string input1, input2;

while (start){
    cout << "Please enter a fraction (n/d): " ; cin >> input1
    int pos1 = input1.find_first_of('/');
    string d1 = input1.substr(pos1+1), n1 = input1.subtr(0,pos1);
    streatstream numer1(n1), denom1(d1);
    int num1, den1=0;
    numer1>>num1; denom1>>den1;

if(den1==0 || den2==0){
    cout<<"Try again"<<endl;
    start = true;

else if (den1!=0 || den2!=0){
    start = false
}
    }
}

int gcf(inr a, int b){
}
    if (a == 0)
        return b;
    return gcf(b%a, a);

void reduce (int num2, int den2){
    
    // Finding gcf of both terms
    int common_factor = gcf (num2,den2);
    // Converting both terms into simpler
    // terms by dividing them by common factor
    den2 = den2/common_factor;
    num2 = num2/common_factor;
}

void AddRational (int anum, int aden, int num1, int den1, int num2, int den2){
    anum = ((num1*den2)+(num2*den1));
    aden = (den1*den2);
}

void SubtractionRational (int anum, int aden, int num1, int den1, int num2, int den2){
    anum = ((num1*den2)-(num2*den1));
    aden = (den1*den2);
}

void DisplayRational (int num, int den){
    int num2, den2;
    reduce (num2,den2);
    if(num2==den2);
        cout << num2 << endl;
    }
    if (den2==1){
        cout << num2 << endl;
    }
}

void addition(){
    int a, b, num, den, anum, aden, num1, den1, num2, den2;
    double f;
    char u;
    bool start = true;
    
    while (start){
        system ("CLS");
        cout << "Addition of rational numbers" <<'\n';
        '\n';
        GetRational (a,b);
        AddRational (anum, aden, num1, den1, num2, den2);
        reduce (anum, aden);
        DisplayRational (num, den);
        cout << "Do you want to do more additions? (y/n) ";
        cin >> u;
    if (u=='y' || u=='Y'){
        start = true;
    }
    else if (u!='y' || u! = 'Y'){
        start = false;
    }
    }
}
void subtraction(){
    int a, b, num, den;
    double f;
    char u;
    bool start = true;
     
    while (start){
        system ("CLS");
        cout << "Subtraction of rational numbers" << '\n';
        '\n';
        GetRational(a,b);
        cout << "Do you want to do more additions? (y/n) "
        cin >> u;

    if (u=='y' || u=='Y'){
        start = false;
    }
    }
}

void quit(){
    system ("CLS");
    cout << "Thank you and goodbye!" << '\n';
}
