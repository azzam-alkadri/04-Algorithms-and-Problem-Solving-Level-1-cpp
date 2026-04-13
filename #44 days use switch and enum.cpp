#include <iostream>
#include <string>
using namespace std;

enum enDayOfWeek 
{ 
    sat = 1,sun = 2, mon = 3, tue = 4, wed = 5,
    thu = 6, fri = 7,  
};

int ReadNumberInRange(string message,int from, int to)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please Enter the number sat = 1,sun = 2, mon = 3, tue = 4, wed = 5, thu = 6, fri = 7, ?" , 1, 7);
}
string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::sat:
        return "saturday";
    case enDayOfWeek::sun:
        return "sunday";
    case enDayOfWeek::mon:
        return "monday";
    case enDayOfWeek::tue:
        return "tuesday";
    case enDayOfWeek::wed:
        return "wednesday";
    case enDayOfWeek::thu:
        return "thursday";
    case enDayOfWeek::fri:
        return "friday";
    default:
        return " Not a valid day";
    }

}



int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
  

  

    return 0;
}