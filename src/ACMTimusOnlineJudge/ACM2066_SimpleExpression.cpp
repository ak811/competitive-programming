/*
	SubmissionId	    :	7755369
	ContestId           :	2066
	ProblemName         :	Simple Expression
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=2066
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int A[9], a, b, c, min, i;
	cin >> a >> b >> c;

	A[0] = a + b + c;
	A[1] = a + b - c;
	A[2] = a - b + c;
	A[3] = a - b - c;
	A[4] = a + b * c;
	A[5] = a * b + c;
	A[6] = a - b * c;
	A[7] = a * b - c;
	A[8] = a * b * c;

	min = A[0];
	for(i = 1; i < 9; i++)
		if(A[i] < min)
			min = A[i];

	cout << min;

	getch();
	return 0;
}