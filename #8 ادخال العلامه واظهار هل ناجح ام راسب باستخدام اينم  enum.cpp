
#include <iostream>
#include <string> 
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{ 

	int mark;
	cout << " pleas enter your mark : "<< endl;
	cin >> mark;
	return mark;

}

enPassFail CheckMark(int Mark)
{ 
	if (Mark > 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark)
{ 
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << " You pass " << endl;
	else 
		cout << " You fail " << endl;
}

int main()

{

	PrintResults(ReadMark());

	return 0;
}