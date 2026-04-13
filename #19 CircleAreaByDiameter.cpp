#include <iostream>
#include <string> 
    using namespace std;

    float ReadDiameter()
    {
        float D;
        cout << "pleas enter Diameter D : " << endl;
        cin >> D;
        return D;


    }
    float CircleAreaByDiameter(float D)
    {
        const float pi = 3.14159;
        float  Area = (pi * pow(D, 2)) / 4;
        return Area;

    }

    void PrintNumbers(float Area)
    {
        cout << " Circle Area is " << Area << endl;

    }

    int main()
    {

       

       
        PrintNumbers(CircleAreaByDiameter(ReadDiameter()));


        return 0;

    }


