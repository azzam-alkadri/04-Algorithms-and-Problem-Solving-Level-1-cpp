
#include <iostream>
using namespace std;

int ReadNumber()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    return num;
   
}
int ReadPoewr()
{
    int m;
   
    cout << "Enter the power: ";
    cin >> m;
    return m;
}

int PrintPower(int num, int m)
{
    if (m == 0)
    {
        return 1;
    }
    int p = 1;
    for (int i = 1; i <= m; i++)
    {
        p *= num;
    }
    return p;
}

int main() {
    
   
    cout << endl <<  " Result =  " << PrintPower(ReadNumber(), ReadPoewr()) << endl;

    return 0;
}