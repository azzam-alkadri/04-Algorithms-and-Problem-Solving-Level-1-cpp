#include <iostream>
#include <string>
using namespace std;

int ReadTotalsales()
{
    int totalsales;
    cout << "please enter a total sales : " << endl;
    cin >> totalsales;

        return totalsales;
}

float GetComissionPercentage(float totalsales)
{

    if (totalsales >= 1000000)
        return 0.01;
    else if (totalsales >= 500000)
        return 0.02;
    else if (totalsales >= 100000)
        return 0.03;
    else if (totalsales >= 50000)
        return 0.04;
    else 
        return 0.00;
    
}
float CalculateTotalComission(float totalsales)
{
  
    return GetComissionPercentage(totalsales) * totalsales;
    
}


int main()
{


    float totalsales= ReadTotalsales();
    cout << "comission percentage = " << GetComissionPercentage(totalsales) << endl;
    cout << "total comission  = " << CalculateTotalComission(totalsales) << endl;

    return 0;
}
