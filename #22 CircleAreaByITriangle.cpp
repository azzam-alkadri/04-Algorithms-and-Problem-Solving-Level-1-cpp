#include <iostream>
#include <string> 
    using namespace std;

    void ReadTriangleData(float& A, float& B)
    {
        cout << "pleas enter the A of high triangle : " << endl;
        cin >> A;
        cout << "pleas enter the B of base triangle : " << endl;
        cin >> B;


    }
    float CircleAreaByITriangle(float A,float B)
    {
        const float pi = 3.14159;
        float  Area = (pi * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {
        float A, B;
        ReadTriangleData(A, B);
        PrintNumbers(CircleAreaByITriangle(A, B));


        return 0;

    }


