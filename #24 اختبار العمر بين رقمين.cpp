#include <iostream>
#include <string> 
    using namespace std;

    int ReadAge()
    {
        int Age;
        cout << " pleas enter Your Age between 18 and 45 : " << endl;
        cin >> Age;
        
        return Age;

    }
    bool ValidateNumberInRange(int Number ,int From  , int To)
    {
        
        return (Number>=From && Number <= To);

    }

    void PrintNumbers(int Age)
    {
        if (ValidateNumberInRange(Age,18,45))
                cout << Age<<" is a valid age " << endl;
        else
            cout << Age << " is a invalid age " << endl;

    }

    int main()
    {
      
       
        PrintNumbers(ReadAge());


        return 0;

    }


