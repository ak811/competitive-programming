/*
    SubmissionId	    :	35316477
	ContestId	        :	118
	Index	            :	A
	ProblemName         :	String Task
	ProgrammingLanguage	:	MS C++
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/118/problem/A
 */

#include <iostream>

using namespace std;
int main(){
	char A[101];
	cin >> A;
	int d = 'a'-'A';

	for(int i=0 ; A[i]; i++)
		if(A[i] < 97 && A[i] > 64)
			A[i] += d;

	for(int j = 0; A[j]; j++){
		if(A[j] == 'a' || A[j] == 'o' || A[j] == 'y' ||
		A[j] == 'e' || A[j] == 'u' || A[j] == 'i' )
			continue;
		else {
			cout << "." << A[j];
		}
	}

	return 0;
}