#include <iostream>
#include <string> 
    using namespace std;

    float ReadRadious()
    {
        float R;
        cout << "pleas enter radious R : " << endl;
        cin >> R;
        return R;


    }
    float CircleArea(float R)
    {
        const float pi = 3.14159;
        float  Area = pi * pow(R, 2);
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {

       

       
        PrintNumbers(CircleArea(ReadRadious()));


        return 0;

    }


