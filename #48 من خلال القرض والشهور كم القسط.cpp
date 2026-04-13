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


float MonthlyInstallment(float LoanaAmount, float HowManyMonths)
{

    return (float)LoanaAmount / HowManyMonths;
}



int main()
{
    float LoanaAmount = ReadPositiveNumber("pleas enter the loanamount : ");
    float HowManyMonths = ReadPositiveNumber("pleas enter the howmanymonths : ");

     cout << "monthly installment = " << MonthlyInstallment(LoanaAmount, HowManyMonths) <<  endl;

	return 0;
}