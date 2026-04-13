#include <iostream>
using namespace std;

enum enOperationTypy { Add = '+', Subtract = '-', Multiply = '*', Divide='/' };

float ReadNumber(string message)
{
    float number;
    cout << message << endl;
    cin >> number;
    return number;
}

enOperationTypy ReadOpType()
{
    char ot = '+';
    cout << "please enter operation type (+,-,*,/)?\n" ;
    cin >> ot;
    return (enOperationTypy)ot;
}

float Calculate(float number1, float number2, char optype)
{
    switch (optype)
    {
    case enOperationTypy::Add:
            return number1 + number2;
    case enOperationTypy::Subtract:
        return number1 - number2;
    case enOperationTypy::Multiply:
        return number1 * number2;
    case enOperationTypy::Divide:
        return number1 / number2;
    default:
        return number1 + number2;


    }
}


int main()
{
   float  number1 = ReadNumber("please enter the first number?");
   float  number2 = ReadNumber("please enter the second number?");
    enOperationTypy optype = ReadOpType();
    cout << endl << "Result of " << number1 << (char)optype << number2 <<" = "<<
        Calculate(number1, number2, optype);
    return 0;
}