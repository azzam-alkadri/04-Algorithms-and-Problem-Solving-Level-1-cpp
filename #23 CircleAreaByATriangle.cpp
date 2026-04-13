#include <iostream>
#include <string> 
    using namespace std;

    void ReadTriangleData(float& A, float& B,float& C)
    {

        cout << "pleas enter the A of high triangle : " << endl;
        cin >> A;
        cout << "pleas enter the B of base triangle : " << endl;
        cin >> B;
        cout << "pleas enter the C of high triangle : " << endl;
        cin >> C;


    }
    float CircleAreaByATriangle(float A,float B , float C)
    {
        const float pi = 3.14159;
        float P ;
        P = (A + B + C) / 2;
        float T;
        T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

        float  Area = pi * pow(T, 2);
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {
        float A, B, C;
        ReadTriangleData(A, B, C);
        PrintNumbers(CircleAreaByATriangle(A, B, C));


        return 0;

    }


