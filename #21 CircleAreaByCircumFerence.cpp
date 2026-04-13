#include <iostream>
#include <string> 
    using namespace std;

    float ReadCircumFerence()
    {
        float L;
        cout << "pleas enter CircumFerence L : " << endl;
        cin >> L;
        return L;


    }
    float CircleAreaByCircumFerence(float L)
    {
        const float pi = 3.14159;
        float  Area = pow(L, 2) / (4 * pi);
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {


        PrintNumbers(CircleAreaByCircumFerence(ReadCircumFerence()));


        return 0;

    }


