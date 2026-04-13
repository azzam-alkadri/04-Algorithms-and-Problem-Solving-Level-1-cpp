
#include <iostream>
#include <string> 
using namespace std;

void ReadNumbers(float& A, float& D)
{
    cout << "pleas enter the A : " << endl;
    cin >> A;
    cout << "pleas enter the D : " << endl;
    cin >> D;
  



}
float RectangleAreaBySideAndDiagonal(float A, float D)
{
    return A * sqrt(pow(D, 2) - pow(A, 2));

}

void PrintNumbers(float Area)
{
    cout << "Rectangle Area is " << Area << endl;
    
}

int main()
{

    float A, D;

    ReadNumbers(A, D);
    PrintNumbers(RectangleAreaBySideAndDiagonal(A,D));
    

    return 0;

}