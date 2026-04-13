#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
    string PinCod;
    cout << "Enter PIN password: ";
    cin >> PinCod;
    return PinCod;
}


bool Login()
{
    string PinCod;
    int Counter = 3;
    do {
        Counter--;
        PinCod = ReadPinCode();
        if (PinCod == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\n Wrong PIN , You Have "<< Counter << " more tries "<< endl;
            system("color 4F");
        }

    } while (Counter >= 1 && PinCod != "1234");
    return 0;
}



int main()
{
    if (Login())
    {
        system("color 2F");
        cout << " your balance is : " << 7500 << endl;
    }
    else
    {
        cout << " Your card blocked call the bank for help. \n";
    }
  
	return 0;
}