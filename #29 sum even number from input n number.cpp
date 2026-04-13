#include <iostream>
using namespace std;

enum enOddEven { odd = 1, even = 2 };

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

int SumEvenNumbersFrom1ToN_UusingFor(int num) {
    int sum = 0;
    cout << "Sum even numbers using for statement: \n";
    for (int i = 1; i <= num; i++) {
        if (CheckOddEven(i) == enOddEven::even) {
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
    int n = readnumber();
    int result = SumEvenNumbersFrom1ToN_UusingFor(n);
    cout << "The sum of even numbers from 1 to " << n << " is: " << result << endl;
    return 0;
}