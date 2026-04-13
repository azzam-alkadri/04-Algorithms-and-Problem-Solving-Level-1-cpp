#include <iostream>
using namespace std;


int readnumber(string message)
{
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num < 0);

    return num;
}
void printfactorial(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {

        fact = fact * i;


    }
    cout << " the factorial of " << num << " is " << fact << endl;
}


int main()
{


    printfactorial(readnumber("pleas enter positive number ?\n"));



    return 0;
}
