#include <iostream>
#include <string>
using namespace std;



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

float HoursToDAYS(float NumberOfHours)
{
   
    return (float)NumberOfHours/24;
}

float HoursToWeeks(float NumberOfHours)
{

    return (float)(NumberOfHours / 24) / 7;
}


float DaysToWeeks(float NumberOfDays)
{

    return (float)NumberOfDays / 7;
}
int main()
{
   float NumberOfHours = ReadPositiveNumber("please enter number of hours ? ");
   float NumberOfDays  = HoursToDAYS(NumberOfHours);
   float NumberOfWeeks = DaysToWeeks(NumberOfDays);
   cout << endl;
   cout << "total Hours = " << NumberOfHours << endl;
   cout << "total Days = " << NumberOfDays << endl;
   cout << "total Weeks = " <<  HoursToWeeks(NumberOfHours) << endl;
   cout << "***********************\n";

  

    return 0;
}