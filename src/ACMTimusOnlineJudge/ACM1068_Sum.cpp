/*
	SubmissionId	    :	7752623
	ContestId           :	1068
	ProblemName         :	Sum
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1068
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;

	if(n <= 0)
		for(int i = 1; i >= n; i--)
			sum += i;
	else 
		for(int j = 1; j <= n; j++)
			sum += j;

	cout << sum;

    getch();
    return 0;
}