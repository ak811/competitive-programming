/*
	SubmissionId	    :	7755238
	ContestId           :	1313
	ProblemName         :	Some Words about Sport
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1313
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n, A[100][100];
	cin >> n;

	for(int l = 0; l < n; l++)
		for(int m = 0; m < n; m++)
			cin >> A[l][m];

	if(n == 1) {
		cout << 1;
		exit(0);
	}

	if(n > 1)
		cout << 1 << " ";

	int k;
	for(int i = 0; i < n - 1; i++) {
		k = 0;
		for(int j = i + 1; j >= 0 && k <= i + 1; j--) {
			cout << A[j][k] << " ";
			k++;
		}
	}

	for(int i = 0; i < n - 1; i++) {
		k= i + 1;
		for(int j = n - 1; j >= i + 1 && k <= n - 1; j--) {
			cout << A[j][k] << " ";
			k++;
		}
	}
	
	getch();
	return 0;
}