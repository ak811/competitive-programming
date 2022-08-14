/*
	SubmissionId	    :	7749714
	ContestId           :	1880
	ProblemName         :	Psych Up's Eigenvalues
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1880
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int count=0, A[4000], B[4000], C[4000];
	int a, b, c, j;
	cin >> a;

	for (int i = 0; i < a; i++)
		cin >> A[i];

	cin >> b;

	for (int i = 0; i < b; i++)
		cin >> B[i];

	cin >> c;

	for (int i = 0; i < c; i++)
		cin >> C[i];

	for (int i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			if (A[i] != B[j])
				continue;
			for (int k = 0; k < c; k++)
				if (A[i] == B[j] && B[j] == C[k] && A[i]==C[k]) {
					count++;
					break;
				}
		}
	}

	cout << count;

	getch();
	return 0;
}