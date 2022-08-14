/*
	SubmissionId	    :	7750465
	ContestId           :	1639
	ProblemName         :	Chocolate 2
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1639
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	if (n == m && n % 2 == 0 & m % 2 == 0)
		cout << "[:=[first]";
	else if (n * m % 2 == 0)
		cout << "[:=[first]";
	else
	    cout << "[second]=:]";

	getch();
	return 0;
}