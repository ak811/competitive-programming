/*
	SubmissionId	    :	7749611
	ContestId           :	1820
	ProblemName         :	Ural Steaks
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1820
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	if (n < k) {
		cout << 2;
		exit(0);
	}

	if ((2 * n) % k == 0)
		cout << (2 * n) / k;
	else
		cout << ((2 * n) / k) + 1;

	getch();
	return 0;
}