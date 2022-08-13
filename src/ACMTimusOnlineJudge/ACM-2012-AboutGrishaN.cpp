/*
	SubmissionId	    :	7747886
	ContestId           :	2012
	ProblemName         :	About Grisha N.
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=2012
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	if ((12 - n) * 0.75 <= 4)
		cout << "YES";
	else
	    cout << "NO";

	getch();
	return 0;
}