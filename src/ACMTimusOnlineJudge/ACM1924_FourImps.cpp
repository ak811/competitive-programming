/*
	SubmissionId	    :	7750536
	ContestId           :	1924
	ProblemName         :	Four Imps
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1924
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n % 4 == 0 || n % 4 == 3)
		cout << "black";
	else
		cout << "grimy";

	return 0;
}