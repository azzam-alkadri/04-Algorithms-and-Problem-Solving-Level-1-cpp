
#include <iostream>
using namespace std;

int ReadNumber()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    return num;
   
}


void PrintPower2_3_4(int num)
{
    int a, b, c;
    a = num * num;
    b = num * num * num;
    c = num * num * num * num;

    cout << " the power2 of " << num << "  is " << a << endl;
    cout << " the power3 of " << num << "  is " << b << endl;
    cout << " the power4 of " << num << " is " << c << endl;
}

int main() {
    
   
    PrintPower2_3_4(ReadNumber());
    return 0;
}