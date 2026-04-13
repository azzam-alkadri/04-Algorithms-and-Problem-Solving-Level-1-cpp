#include <iostream>
#include <string>
using namespace std;



float ReadNumber(string message)
{
    float number;
    cout << message << endl;
    cin >> number;
    return number;
}

float SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;
    do
    {
        Number = ReadNumber("please enter number " + to_string(Counter));

        if (Number == -99)
        {
            break;
        }
        Sum += Number;
        Counter++;
    } while (Number != -99);

    return Sum;

}

int main()
{
    cout << endl << "Result = " << SumNumbers() << endl;
    return 0;
}