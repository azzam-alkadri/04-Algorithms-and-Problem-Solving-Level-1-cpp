#include <iostream>
using namespace std;


int readnumber()
{
    int num;
    cout << " enter the number: \n";
    cin >> num;
    return num;
}
void printnumbers(int num)
{
    cout << " range printed using for statement :\n";
    for (int i = 1; i <= num; i++)
    {

        cout << i << endl;
    }
}


int main()
{


    printnumbers(readnumber());



    return 0;
}
