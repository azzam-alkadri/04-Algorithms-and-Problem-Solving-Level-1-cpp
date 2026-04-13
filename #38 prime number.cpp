#include <iostream>
#include <string>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

enPrimNotPrime CheckPrim(int number)
{
    int m = round(number / 2);
    for (int counter = 2; counter <= m; counter++)
    {
        if (number % counter == 0)
            return enPrimNotPrime::NotPrime;

    }
    return enPrimNotPrime::Prime;

}
void PrintNumberType(int number)
{
    switch (CheckPrim(number))
    {
    case enPrimNotPrime::Prime:
        cout << " the number is prime" << endl;
        break;
    case enPrimNotPrime::NotPrime:
        cout << " the number is notprime" << endl;
        break;
    }

}


int main()
{
    PrintNumberType(ReadPositiveNumber("please enter a positive number? "));
    return 0;
}