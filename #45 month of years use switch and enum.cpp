#include <iostream>
#include <string>
using namespace std;


enum enMonthOfYear {
    jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6,
    jul = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12
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

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please Enter a month [1 to 12]?" , 1, 12);
}
string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    {
    case enMonthOfYear::jan:
        return "january ";
    case enMonthOfYear::feb:
        return "february ";
    case enMonthOfYear::mar:
        return "march ";
    case enMonthOfYear::apr:
        return "april ";
    case enMonthOfYear::may:
        return "may  ";
    case enMonthOfYear::jun:
        return "june ";
    case enMonthOfYear::jul:
        return "july ";
    case enMonthOfYear::aug:
        return "august ";
    case enMonthOfYear::sep:
        return "september ";
    case enMonthOfYear::oct:
        return "october ";
    case enMonthOfYear::nov:
        return "november ";
    case enMonthOfYear::dec:
        return "december ";
    default:
        return " Not a valid month";
    }

}



int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
  

  

    return 0;
}