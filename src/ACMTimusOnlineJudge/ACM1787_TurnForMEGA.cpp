/*
	SubmissionId	    :	7759764
	ContestId           :	1787
	ProblemName         :	Turn for MEGA
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1787
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n , k, a[101], flag = 0, sum = 0, num = 0, cross = 0, remain = 0;
	cin >> k >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];

		if(a[i] >= k) {
			cross += k;
			remain += a[i] - k;
		} else {
			remain += a[i];
			cross += remain;

			if(remain >= k)
				remain -= k;
			else
				remain = 0;
		}

		sum += a[i];
	}

	cout << remain;

	getch();
	return 0;
}