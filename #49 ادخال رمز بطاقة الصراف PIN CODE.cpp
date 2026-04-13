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
    do {
        PinCod = ReadPinCode();
        if (PinCod == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\n Wrong PIN \n";
            system("color 4F");
        }

    } while (PinCod != "1234");
    return 0;
}



int main()
{
    if (Login())
    {
        system("color 2F");
        cout << " your balance is : " << 7500 << endl;
    }
  
	return 0;
}