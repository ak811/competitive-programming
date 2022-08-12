/*
	SubmissionId	    :	35784209
	ContestId           :	158
	Index               :	A
	ProblemName         :	Next Round
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/158/problem/A
*/

#include <iostream>
using namespace std;

int main(){

	int i, n, k, A[51];
	cin >> n >> k;

	for(i = 0; i < n; i++)
		cin >> A[i];

	for(int j = 0; j < sizeof(A); j++){
		while(A[k-1] == A[k] && A[k-1] != 0)
			k++;
		while(A[k-1] == 0)
			k--;
	}

	cout << k;

	return 0;
}