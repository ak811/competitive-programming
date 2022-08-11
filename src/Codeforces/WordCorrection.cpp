/*
	SubmissionId	    :	35352532
	ContestId           :	938
	Index               :	A
	ProblemName         :	Word Correction
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/938/problem/A
*/

#include <iostream>
using namespace std;

int strLen(char str[101]);

int main(){
	char A[101], B[101];
	int n, k = 0, num = 0;
	cin >> n;
	cin >> A;

	for(int i = 0; i < strLen(A) - 1; i++)
		if((A[i] == 'a' || A[i] == 'e' || A[i] == 'i' ||
		 A[i] == 'o' || A[i] == 'u' || A[i] == 'y' || A[i] == '+') &&
			(A[i+1] == 'a' || A[i+1] == 'e' || A[i+1] == 'i'
			|| A[i+1] == 'o' || A[i+1] == 'u' || A[i+1] == 'y' || A[i+1] == '+')) {
			A[i+1] = '+';
		    num++;
	    }

	for(int j = 0; j < strLen(A); j++)
		if(A[j] == '+') {
			continue;
		} else {
			B[k] = A[j];
			k++;
		}

	for(int k = 0; k < strLen(A) - num; k++)
		cout << B[k];

	return 0;
}

int strLen(char str[101]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}