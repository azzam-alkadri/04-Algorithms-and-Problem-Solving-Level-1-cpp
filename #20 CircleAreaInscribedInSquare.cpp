#include <iostream>
#include <string> 
    using namespace std;

    float ReadSquareSise()
    {
        float A;
        cout << "pleas enter Square Side A : " << endl;
        cin >> A;
        return A;


    }
    float CircleAreaInscribedInSquare(float A)
    {
        const float pi = 3.14159;
        float  Area = (pi * pow(A, 2)) / 4;
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {


        PrintNumbers( CircleAreaInscribedInSquare(ReadSquareSise()));


        return 0;

    }


