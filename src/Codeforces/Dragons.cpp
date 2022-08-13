/*
	SubmissionId	    :	35795854
	ContestId           :	230
	Index               :	A
	ProblemName         :	Dragons
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/230/problem/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	pair<int, int> *P = new pair<int,int> [1001];
	int s, n, flag = 0;
	cin >> s >> n;

	for(int i = 0; i < n; i++){
		cin >> P[i].first;
		cin >> P[i].second;
	}

	sort(P, P + n);

	for(int j = 0; j < n; j++)
		if(s > P[j].first)
			s += P[j].second;
		else
		    flag = 1;

	if(flag == 0)
		cout << "YES";
	else
	    cout << "NO";

	return 0;
}


