#include<iostream>
using namespace std;

int main(){
                //variable decleretion
float a, b, c;
char operation;
                //input the values to the variables
cout << "Enter the first Number :";
cin >> a ;

cout << "Choose the operator (+ , - , * , / ) :";
cin >> operation;

cout << "Enter the second Number :";
cin >> b ;
                //switch use to get the correct operation
    switch(operation){
        case '+' :
            c = a + b;
            break;
        case '-' :
            c = a - b;
            break;
        case '*' :
            c = a * b;
            break;
        case '/' :
            c = a / b;
            break;
        default:
            cout << "Invalid Format!!!!!!!!!";
            break;
        }
                //Display the answer
        cout << "The answer = "<< c ;

        return 0;
}
