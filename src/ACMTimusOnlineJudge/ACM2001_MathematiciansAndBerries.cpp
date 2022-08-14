/*
	SubmissionId	    :	7748105
	ContestId           :	2001
	ProblemName         :	Mathematicians and Berries
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=2001
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a[2], b[2], c[2];

	for (int i = 0; i < 2; i++)
		cin >> a[i];

	for (int i = 0; i < 2; i++)
		cin >> b[i];

	for (int i = 0; i < 2; i++)
		cin >> c[i];

	cout << c[1] - a[1] << endl << b[0] - a[0];

	getch();
	return 0;
}