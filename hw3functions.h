#include <iostream>
#include <string.h>
using namespace std;



void showmenu(){

    cout << "Rational numbers calculator" << endl;
    cout << endl << "(A)ddition" << endl << "(S)ubtraction" << endl << "(Q)uit" << endl;
    cout << endl << "Enter your option: " << endl; 
}







void GetRational(int *num, int *den){
    string num_str, den_str, str;

    cout << "Please enter a fraction: (n/d)" << endl;

    getline(cin, str);

    int dSymbol = str.find('/');
    int denlim = str.length() - (dSymbol + 1); 

    num_str = str.substr(0, dSymbol);
    den_str = str.substr((dSymbol + 1), denlim);

    //converts string to integer
    *num = std::stoi(num_str);
    *den = std::stoi(den_str);

}

void reduce(int *num, int *den){
    int a = 0, b = 0, r = 0;

    a = *num;
    b = *den;

    if(a % b != 0){
        r = (a % b);

        while(r != 0){
            a = b;
            b = r;
            r = (a % b);

        }

       int c = *num;
       int d = *den;

        //returning reduced numbers
        *num = (c / b);
        *den = (d / b);

    }
    else{
        //returning reduced numbers, in the case your addition or subtraction produced a whole number
        *num = (a / b);
        *den = 1;
    }

}









void AddRational(int *a_num, int *a_den, int num_1, int den_1, int num_2, int den_2){

    *a_num = ( (num_1 * den_2) + (num_2 * den_1) );
    *a_den = (den_1 * den_2);


    int b_num = *a_num;
    int b_den = *a_den;

    // call reduce function
    reduce(&b_num, &b_den);

    *a_num = b_num;
    *a_den = b_den;
}





void SubtractRational(int *a_num, int *a_den, int num_1, int den_1, int num_2, int den_2){

    *a_num = ( (num_1 * den_2) - (num_2 * den_1) );
    *a_den = (den_1 * den_2); 

    int b_num = *a_num;
    int b_den = *a_den;

    // call reduce function
    reduce(&b_num, &b_den);

    *a_num = b_num;
    *a_den = b_den;
}

void DisplayRational(int num, int den){
    if(den != 1){
        cout << "Your final answer is : " << num << "/" << den << "!" << endl;
    }
    else{
        cout << "Your final answer is: " << num << "!" << endl;
    }
}






void add(){
    int num = 0, den = 0;
    int num_1 = 0, num_2 = 0;
    int den_1 = 0, den_2 = 0;
    bool switch_1 = 1;

    //clears console
    for(int i = 0; i < 12; i++){
        cout << '\0' << endl;
    }

    cout << "Addition of rational numbers" << endl;

    while(switch_1 == 1){
        //runs fraction input function twice to genereate values for the addition function
        //if statement makes sure you're not returning an undefined number
        GetRational(&num, &den);
        num_1 = num;
        den_1 = den;

        GetRational(&num, &den);
        num_2 = num;
        den_2 = den;

        if(den_1 != 0 && den_2 != 0){
            switch_1 = 0;
        }
        else{
            cout << "Zero in the denominator, Please try again!" << endl;
        }

    }

    // call AddRational
    AddRational(&num, &den, num_1, den_1, num_2, den_2);
	
    
    // return AddRational results to user
    DisplayRational(num, den);
}





void subtract(){
    int num = 0, den = 0; // these variables will be pointed to
    int num_1 = 0, num_2 = 0;
    int den_1 = 0, den_2 = 0;
    bool switch_1 = 1;

    //clears console
    for(int i = 0; i < 12; i++){
        cout << '\0' << endl;
    }

    cout << "Subtraction of rational numbers" << endl;

    while(switch_1 == 1){
        //runs fraction input function twice to genereate values for the subtraction function
        //if statement makes sure you're not returning an undefined number
        GetRational(&num, &den);
        num_1 = num;
        den_1 = den;

        GetRational(&num, &den);
        num_2 = num;
        den_2 = den;

        if(den_1 != 0 && den_2 != 0){
            switch_1 = 0;
        }
        else{
            cout << "Zero in the denominator, Please try again!" << endl;
        }
    }

    // call SubtractRational
    SubtractRational(&num, &den, num_1, den_1, num_2, den_2);
    // return SubtractRational results to user
    DisplayRational(num, den);


}
