/*
	SubmissionId	    :	7754619
	ContestId           :	1083
	ProblemName         :	Factorials!!!
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1083
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int sum = 1, k = 0, n;
	cin >> n;
	char A[20];
	gets(A);

	for(int i = 0; A[i]; i++)
		if(A[i] == '!')
			k++;

	for(int j = 0; j < n; j++)
		if((n - j * k) < 1)
			continue;
		else sum *= (n - j * k);

	cout << sum;

	getch();
	return 0;
}