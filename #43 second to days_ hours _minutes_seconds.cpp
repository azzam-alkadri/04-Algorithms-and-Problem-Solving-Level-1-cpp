#include <iostream>
#include <string>
using namespace std;

struct stTaskDuraition
{ 
    int numberofday, numberofhours, numberofminutes, numberofseconds;
};

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

stTaskDuraition ReadTaskDuraition(int TotalSeconds)
{
    stTaskDuraition TaskDuraition;

    const int secondperday = 24 * 60 * 60;
    const int secondsperhours = 60 * 60;
    const int secondsperminutes = 60;

    int Remainder;
    TaskDuraition.numberofday = floor(TotalSeconds / secondperday);
    Remainder = TotalSeconds % secondperday;
    TaskDuraition.numberofhours = floor(Remainder / secondsperhours);
    Remainder = Remainder % secondsperhours;
    TaskDuraition.numberofminutes = floor(Remainder / secondsperminutes);
    Remainder = Remainder % secondsperminutes;
    TaskDuraition.numberofseconds = Remainder;

    return TaskDuraition;
}

void PrintReadTaskDuraitionDetails(stTaskDuraition TaskDuraition)
{
    cout << "\n";
    cout << TaskDuraition.numberofday << ":"
        << TaskDuraition.numberofhours << ":"
        << TaskDuraition.numberofminutes << ":"
        << TaskDuraition.numberofseconds << "\n";

}

int main()
{
    int TotalSeconds = ReadPositiveNumber("pleas enter the totalseconds : ");
    PrintReadTaskDuraitionDetails(ReadTaskDuraition(TotalSeconds));
  

  

    return 0;
}