/*
    SubmissionId	    :	35317337
	ContestId	        :	231
	Index	            :	A
	ProblemName         :	Team
	ProgrammingLanguage	:	MS C++
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/231/problem/A
 */

#include <iostream>
using namespace std;

int main(){

	int n , a, num, solved = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		num = 0;

		for(int j = 0; j < 3; j++){
			cin >> a;
			if(a == 1)
				num++;
		}

		if(num >= 2)
			solved++;
	}

	cout << solved;

	return 0;
}