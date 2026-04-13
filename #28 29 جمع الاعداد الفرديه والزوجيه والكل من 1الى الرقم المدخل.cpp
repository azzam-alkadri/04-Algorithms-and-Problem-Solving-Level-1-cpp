#include <iostream>
using namespace std;

enum enOddEven { odd = 1, even = 2, all = 3 };

int readnumber() {
    int num;
    cout << "Enter the number: \n";
    cin >> num;
    return num;
}

enOddEven CheckOddEven(int Number) {
    if (Number % 2 != 0)
        return enOddEven::odd;
    else
        return enOddEven::even;
}

int SumNumbersFrom1ToN_UusingFor(int num, enOddEven type) {
    int sum = 0;
    
    for (int i = 1; i <= num; i++) {
        if (type == enOddEven::all || CheckOddEven(i) == type) {
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
    int n = readnumber();
    int oddSum = SumNumbersFrom1ToN_UusingFor(n, enOddEven::odd);
    int evenSum = SumNumbersFrom1ToN_UusingFor(n, enOddEven::even);
    int allSum = SumNumbersFrom1ToN_UusingFor(n, enOddEven::all);

    cout << "The sum of odd numbers from 1 to " << n << " is: " << oddSum << endl;
    cout << "The sum of even numbers from 1 to " << n << " is: " << evenSum << endl;
    cout << "The sum of all numbers from 1 to " << n << " is: " << allSum << endl;
    return 0;
}
