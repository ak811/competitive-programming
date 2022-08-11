/*
	SubmissionId	    :	35331456
	ContestId           :	339
	Index               :	A
	ProblemName         :	Helpful Maths
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/339/problem/A
*/

#include <iostream>
using namespace std;

int strLen(char str[101]);

int main() {
	char A[101], B[101];
	int tmp;
	cin >> A;

	for(int j = 1; j < strLen(A)-1; j++)
		for(int i = 0; i <= strLen(A) - j - 2; i += 2)
			if(A[i] > A[i+2])
				swap(A[i], A[i+2]);
				
	for(int k=0; A[k]; k++)
		cout << A[k];

	return 0;
}

int strLen(char str[101]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}