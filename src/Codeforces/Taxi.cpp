/*
	SubmissionId	    :	35789044
	ContestId           :	158
	Index               :	B
	ProblemName         :	Taxi
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/158/problem/B
*/

#include <iostream>
using namespace std;

int main(){

	int n, num = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, A[100000];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> A[i];
		switch(A[i]) {
		    case 1:
			    count1++;
			    continue;
		    case 2:
			    count2++;
			    continue;
		    case 3:
			    count3++;
			    continue;
		    case 4:
			    count4++;
			    continue;
		}
	}

	if(count3>=count1) {
		num += count1;
		count3 -= count1;
		count1 = 0;
	} else {
		num += count3;
		count1 -= count3;
		count3 = 0;
	}

	if(count2 % 2 == 0 && count1 % 4 != 0) {
		num++;
		count1 -= count1 % 4;
	} else if(count2 % 2 == 1 && count1 % 4 <= 2) {
		num++;
		count1 -= count1 % 4;
	} else if(count2 % 2 == 1 && count1 % 4 > 2)
		num += 2;

	num += count4 + count2 / 2 + count1 / 4 + count3;
	cout << num;

	return 0;
}