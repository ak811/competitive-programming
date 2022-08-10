/*
    SubmissionId	    :	35293088
	ContestId	        :	71
	Index	            :	A
	ProblemName         :	Way Too Long Words
	ProgrammingLanguage	:	MS C++
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/71/problem/A
 */

#include <iostream>
using namespace std;

int main(){
	int n;
	char A[101][101];
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int j = 0; j < n; j++){
		if(strlen(A[j]) > 10)
			cout<< A[j][0] << strlen(A[j])-2
			<< A[j][strlen(A[j])-1] <<endl;
		else
			cout<< A[j] << endl;
	}
	return 0;
}