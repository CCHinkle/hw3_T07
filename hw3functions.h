// INDEX
// function 1: displays user menu 
// function 2:
// function 3:
// function 4:
// function 5:
// function 6:
// function 7:


//function1
void showmenu(){

    cout << "Rational numbers calculator" << endl;
    cout << endl << "(A)ddition" << endl << "(S)ubtraction" << endl << "(Q)uit" << endl;
    cout << endl << "Enter your option: " << endl; 
}






//function xx, used only in functions xx to pull user inputs for opperation
// i don't know why this would need an input. Maybe so it can return to those variables?
int GetRational(int *num, int *den){
    string num_str, den_str, str;
    stringstream s_stream(str);
    
    cout << "Please enter a fraction (n/d) : " << endl;

    //getline(cin, str); // I'm not sure what this does.
    getline(s_stream, num_str, '/');
    getline(s_stream, den_str, '/');
    
    //converts string to integer
    *num = stoi(num_str);
    *den = stoi(den_str);

    return(*num, *den)
}





int reduce(int *num, int *den){
    int a = 0, b = 0, r = 0;

    a = *num;
    b = *den;

    r = (a % b);

    while(remain != 0){
        a = b;
        b = r;
        r = (a % b);
    }

    *num = (*num / r);
    *den = (*den / r);

    return(*num, *den)

}






// i don't know what *a_num && a_den are supposed to be used for
// might be incase you want to return a rational number to the user
int AddRational(int *a_num, int *a_den, int num_1, int den_1, int num_2, int den_2){
    int num = 0, den = 0; // might be unneeded

    *a_num = ( (num_1 * den_2) + (num_2 * den_1) );
    *a_den = (den_1 * den_2);

    // call reduce function
    reduce(*a_num, *a_den)
    // return reduced ( a_num && a_den)
    // idk if the reduced numbers will store properly here, or even return
    return(num, den) 
}






int SubtractRational(int *a_num, int *a_den, int num_1, int den_1, int num_2, int den_2){
    int num = 0, den = 0; // might be unneeded

    *a_num = ( (num_1 * den_2) - (num_2 * den_1) );
    *a_den = (den_1 * den_2); 

    // call reduce function
    reduce(*a_num, *a_den)
    // return reduced ( a_num && a_den)
    // idk if the reduced numbers will store properly here, or even return
    return(num, den)
}







void add(){
    int *num = 0, *den = 0; // i don't know if these are needed
    int num_1 = 0, num_2 = 0;
    int den_1 = 0, den_2 = 0;
    int num = 0, den = 0; // would be used to store final answer if needed
    bool switch = 1

    //clears console
    for(int i = 0; i < 12; i++){
        cout << '\0' << endl;
    }

    cout << "Addition of rational numbers" << endl;

    while(switch == 1){
        //runs fraction input function twice to genereate values for the addition function
        //if statement makes sure you're not returning an undefined number
        GetRational(*num, *den);
        num_1 = *num;
        den_1 = *den;

        if(*den == 0){
            cout << "0 denominator, please try again. " << endl;
        }
        else{
            !switch
        }

        !switch

        GetRational(*num, *den);
        num_2 = *num;
        den_2 = *den;

        if(*den == 0){
            cout << "0 denominator, please try again. " << endl;
        }
        else{
            !switch
        }

    }

    // call AddRational
    AddRational(*num, *den, num_1, den_1, num_2, den_2)
    // return AddRational results to user
    cout << "Your final fraction is: " << num << "/" << den << " !" endl;
}






void subtract(){
    int *num = 0, *den = 0; // i don't know if these are needed
    int num_1 = 0, num_2 = 0;
    int den_1 = 0, den_2 = 0;
    int num = 0, den = 0; // would be used to store final answer if needed
    bool switch = 1

    //clears console
    for(int i = 0; i < 12; i++){
        cout << '\0' << endl;
    }

    cout << "Subtraction of rational numbers" << endl;


    //switching here is borked but I can't think clearly enough to fix it right now
    while(switch == 1){
        //runs fraction input function twice to genereate values for the subtraction function
        //if statement makes sure you're not returning an undefined number
        GetRational(*num, *den);
        num_1 = *num;
        den_1 = *den;

        if(*den == 0){
            cout << "1st denominator is equal to 0, please try again " << endl;
        }
        

        !switch

        GetRational(*num, *den);
        num_2 = *num;
        den_2 = *den;

        if(*den == 0){
            cout << "2nd denominator is equal to 0, please try again " << endl;
        }
        else{
            !switch
        }

    }

    // call SubtractRational
    SubtractRational(*num, *den, num_1, den_1, num_2, den_2)
    // return SubtractRational results to user
    cout << "Your final fraction is: " << num << "/" << den << " !" endl;


}
