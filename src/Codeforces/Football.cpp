/*
	SubmissionId	    :	35319022
	ContestId           :	96
	Index               :	A
	ProblemName         :	Football
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/96/problem/A
*/

#include <iostream>
using namespace std;

int main(){
	int num1 = 0, num2 = 0;
	char A[101];
	cin >> A;

	for(int i = 0; A[i]; i++)
		if(A[i] == '0') {
			num2 = 0;
			num1++;
			if(num1 == 7)
				break;
		}
		else {
			num1 = 0;
			num2++;
			if(num2 == 7)
				break;
		}

	if(num1 == 7 || num2 == 7) cout << "YES";
	else cout << "NO";

	return 0;
}