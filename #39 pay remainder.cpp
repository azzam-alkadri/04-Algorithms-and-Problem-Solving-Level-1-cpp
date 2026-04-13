#include <iostream>
using namespace std;



float ReadNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float CalculateRemainder(float totalbill, float cashpaid)
{
    return cashpaid - totalbill;
}

int main()
{
   float totalbill= ReadNumber("please enter totalbill ? ");
   float cashpaid = ReadNumber("please enter cashpaid ? ");

   cout << endl;
   cout << "total bill = " << totalbill << endl;
   cout << "total cash paid = " << cashpaid << endl;
   cout << "***********************\n";

   cout << "remainder  = " << CalculateRemainder(totalbill, cashpaid)<< endl;


    return 0;
}