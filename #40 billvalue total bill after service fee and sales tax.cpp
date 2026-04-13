#include <iostream>
#include <string>
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

float TotalBillAfterServiceAndTax(float totalbill)
{
    totalbill = totalbill * 1.1;
    totalbill = totalbill * 1.16;
    return totalbill;
}

int main()
{
   float totalbill= ReadNumber("please enter total bill ? ");
  

   cout << endl;
   cout << "total bill = " << totalbill << endl;
   cout << "total bill after service fee and sales tax = " << TotalBillAfterServiceAndTax(totalbill) << endl;
   cout << "***********************\n";

  

    return 0;
}