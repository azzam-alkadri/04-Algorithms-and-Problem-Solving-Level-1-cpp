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

stTaskDuraition ReadTaskDuraition()
{
    stTaskDuraition TaskDuraition;

    TaskDuraition.numberofday = ReadPositiveNumber("pleas enter the numberofday : ");
    TaskDuraition.numberofhours = ReadPositiveNumber("pleas enter the numberofhours : ");
    TaskDuraition.numberofminutes = ReadPositiveNumber("pleas enter the numberofminutes : ");
    TaskDuraition.numberofseconds = ReadPositiveNumber("pleas enter the numberofseconds : ");

    return TaskDuraition;
}

int TaskDuraitionInSeconds(stTaskDuraition TaskDuraition)
{
    int  TotalSeconds = 0;

    TotalSeconds = TaskDuraition.numberofday * 24 * 60 * 60;
    TotalSeconds += TaskDuraition.numberofhours * 60 * 60;
    TotalSeconds += TaskDuraition.numberofminutes * 60;
    TotalSeconds += TaskDuraition.numberofseconds;
    
    return TotalSeconds;

}

int main()
{
   
   cout << "Task Duraition In Seconds : " << TaskDuraitionInSeconds(ReadTaskDuraition())<<  endl;
 

  

    return 0;
}