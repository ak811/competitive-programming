/*
	SubmissionId	    :	8412338
	ContestId           :	1001
	ProblemName         :	Reverse Root
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1001
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	long long int a[4];

	for (int i = 0; i < 4; i++)
		cin >> a[i];

	for (int i = 3; i >= 0; i--)
		cout << sqrt(a[i]) << endl;

	getch();
	return 0;

}