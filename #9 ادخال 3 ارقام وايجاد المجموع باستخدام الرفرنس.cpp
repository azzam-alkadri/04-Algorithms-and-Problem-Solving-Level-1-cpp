
#include <iostream>
#include <string> 
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "pleas enter the number1 : " << endl;
    cin >> Num1;
    cout << "pleas enter the number2 : " << endl;
    cin >> Num2;
    cout << "pleas enter the number3 : " << endl;
    cin >> Num3;


}
int	 SumOf3Numbers(int Num1, int Num2, int Num3) 
 { 
    return Num1 + Num2 + Num3 ;
 }

void PrintResults(int Total)
 {  
    cout << " total of three numbers is : " << Total << endl;
 }

	int main()
    { 

     int Num1, Num2, Num3;

     ReadNumbers(Num1, Num2, Num3);

     PrintResults(SumOf3Numbers(Num1, Num2, Num3));

     return 0;

     }