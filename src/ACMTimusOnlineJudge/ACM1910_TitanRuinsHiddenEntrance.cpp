/*
	SubmissionId	    :	7750368
	ContestId           :	1910
	ProblemName         :	Titan Ruins: Hidden Entrance
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1910
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int i, m, A[1000], n;
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> A[i];

	int max = A[0] + A[1] + A[2];
	m = 2;

	for (i = 1; i < n - 2; i++)
		if (A[i] + A[i + 1] + A[i + 2] > max) {
			max = A[i] + A[i + 1] + A[i + 2];
			m = i + 2;
		}

	cout << max << " " << m;

	getch();
	return 0;
}