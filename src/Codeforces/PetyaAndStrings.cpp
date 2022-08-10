/*
	SubmissionId	    :	35329577
	ContestId           :	112
	Index               :	A
	ProblemName         :	Petya and Strings
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/112/problem/A
*/

#include <iostream>
using namespace std;

void toLowerCase(char A[101]);

int main(){

	char A[101], B[101];
	cin >> A >> B;
	toLowerCase(A);
	toLowerCase(B);
	cout << strcmp(A, B);

	return 0;
}

void toLowerCase(char A[101]) {
		int d = 'a' - 'A';
	for(int i = 0; A[i]; i++)
		if(A[i] < 97 && A[i] > 64)
			A[i] += d;
}