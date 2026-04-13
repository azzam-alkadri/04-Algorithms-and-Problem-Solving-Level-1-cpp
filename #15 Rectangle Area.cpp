
#include <iostream>
#include <string> 
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "pleas enter the width  of rectangle A : " << endl;
    cin >> A;
    cout << "pleas enter the height of rectangle B : " << endl;
    cin >> B;
  



}
float CalculateRectangleArea(float A, float B)
{
    return A * B;

}

void PrintNumbers(int Area)
{
    cout << "Rectangle Area is " << Area << endl;
    
}

int main()
{

    float A, B;

    ReadNumbers(A, B);
    PrintNumbers(CalculateRectangleArea(A,B));
    

    return 0;

}