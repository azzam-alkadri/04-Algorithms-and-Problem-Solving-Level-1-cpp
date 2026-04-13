#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}


float TotalMonths(float LoanaAmount, float MonthlyInstallment)
{

    return (float)LoanaAmount / MonthlyInstallment;
}



int main()
{
    float LoanaAmount = ReadPositiveNumber("pleas enter the loanamount : ");
    float MonthlyInstallment = ReadPositiveNumber("pleas enter the monthlyinstallment : ");

     cout << "the total months to pay = " << TotalMonths(LoanaAmount, MonthlyInstallment) <<  endl;

	return 0;
}