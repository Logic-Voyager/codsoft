// calculator (switch-case based)
#include<iostream>
using namespace std;

int main(){

    char op;
    float num1, num2, res;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    //Read two numbers
    cout<<"Enter two operands: ";
    cin >> num1 >> num2;
 
    // Defining all operations (Ascii table)
    switch(op)
    {
        case '+':
        res = num1 + num2;
        break;

        case '-':
        res = num1 - num2;
        break;

        case '*':
        res = num1 * num2;
        break;

        case '/':
        res = num1 / num2;
        break;
        
        default:
        // if the operator is other than +, -, * and /, error msg
        // will float
        cout<<"Error! Operator is not listed \n";
    }
    //Printing the result:
    cout << "Result: " << res;
    return 0;
    
}