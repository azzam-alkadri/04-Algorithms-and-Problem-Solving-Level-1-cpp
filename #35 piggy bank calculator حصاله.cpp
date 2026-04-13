#include <iostream>
using namespace std;

struct StPiggyBankContenet {

    int pennies, nickels, dimes, quarters, dollars;
};

StPiggyBankContenet ReadPiggyBankContenet()
{
    StPiggyBankContenet PiggyBankContenet;
    cout << "pleas enter the numbers of pennies : " << endl;
    cin >> PiggyBankContenet.pennies;
    cout << "pleas enter the numbers of nickels : " << endl;
    cin >> PiggyBankContenet.nickels;
    cout << "pleas enter the numbers of dimes : " << endl;
    cin >> PiggyBankContenet.dimes;
    cout << "pleas enter the numbers of quarters : " << endl;
    cin >> PiggyBankContenet.quarters;
    cout << "pleas enter the numbers of dollars : " << endl;
    cin >> PiggyBankContenet.dollars;

    return PiggyBankContenet;

}

int CalculateTotalPennies(StPiggyBankContenet PiggyBankContenet)
{
    int  TotalPennies = 0;

    TotalPennies = PiggyBankContenet.pennies * 1 + PiggyBankContenet.nickels * 5 +
        PiggyBankContenet.dimes * 10 + PiggyBankContenet.quarters * 25 +
        PiggyBankContenet.dollars * 100;

    return TotalPennies;
}

int main()
{
    int  TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
    cout << "the totalpennies is  " << TotalPennies << endl;
    cout << "the totaldollars is  " <<(float)TotalPennies / 100 << endl;

    return 0;
}