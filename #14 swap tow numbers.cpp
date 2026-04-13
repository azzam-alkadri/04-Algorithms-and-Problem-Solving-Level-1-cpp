
#include <iostream>
#include <string> 
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "pleas enter the number1 : " << endl;
    cin >> Num1;
    cout << "pleas enter the number2 : " << endl;
    cin >> Num2;



}
void Swap(int& A, int& B)
{
    int temp;
    temp = A;
    A = B;
    B = temp;

}

void PrintNumbers(int Num1, int Num2)
{
    cout << "\nNumbers1 =  " << Num1 << endl;
    cout << "Numbers2 =  " << Num2 << endl;
}

int main()
{

    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    PrintNumbers(Num1, Num2);

    return 0;

}