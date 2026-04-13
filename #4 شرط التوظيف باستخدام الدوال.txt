#include <iostream>
using namespace std;

struct stinfo 
{
    int age;
    bool hasdrivelicens ;
   
};

stinfo  readinfo()
{
    stinfo info;
    cout << "enter age :";
    cin >> info.age;
    cout << "if you have drive licenes (0/1)" << endl;
    cin >> info.hasdrivelicens;
    

    return info;
}


bool isaccepted(stinfo info)
{
   
    
    return (info.age > 21 && info.hasdrivelicens);
}

void printresult(stinfo info)
{
    if (isaccepted(info))
         {
        cout << " accept in job " << endl;

    }
    else {
        cout << " reject in job " << endl;

    }

}

int main()
{
   printresult(readinfo());

    return 0;
}