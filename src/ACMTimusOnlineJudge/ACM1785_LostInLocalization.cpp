/*
	SubmissionId	    :	7748205
	ContestId           :	1785
	ProblemName         :	Lost in Localization
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1785
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a;
	cin >> a;

	if (a >= 1 && a <= 4)
		cout << "few";
	else if (a >= 5 && a <= 9)
		cout << "several";
	else if (a >= 10 && a <= 19)
		cout << "pack";
	else if (a >= 20 && a <= 49)
		cout << "lots";
	else if (a >= 50 && a <= 99)
		cout << "horde";
	else if (a >= 100 && a <= 249)
		cout << "throng";
	else if (a >= 250 && a <= 499)
		cout << "swarm";
	else if (a >= 500 && a <= 999)
		cout << "zounds";
	else if (a >= 1000 && a <= 2000)
		cout << "legion";

	getch();
	return 0;
}