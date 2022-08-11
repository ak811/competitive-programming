/*
	SubmissionId	    :	35332689
	ContestId           :	266
	Index               :	A
	ProblemName         :	Stones on the Table
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/266/problem/A
*/

#include <iostream>
using namespace std;

int strLen(char str[100]);

int main() {
	char A[51];
	int n, num = 0;
	cin >> n;
	cin >> A;

	for(int i = 0; i < strLen(A) - 1; i++)
		if(A[i] == A[i+1])
			num++;

	cout << num;

	return 0;
}

int strLen(char str[100]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}