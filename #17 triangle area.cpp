#include <iostream>
#include <string> 
    using namespace std;

    void ReadNumbers(float& A, float& H)
    {
        cout << "pleas enter the width  of rectangle A : " << endl;
        cin >> A;
        cout << "pleas enter the height of rectangle H : " << endl;
        cin >> H;




    }
    float TriangleArea(float A, float H)
    {
        return (A/2) * H;

    }

    void PrintNumbers(float Area)
    {
        cout << "Rectangle Area is " << Area << endl;

    }

    int main()
    {

        float A, H;

        ReadNumbers(A, H);
        PrintNumbers(TriangleArea(A, H));


        return 0;

    }


