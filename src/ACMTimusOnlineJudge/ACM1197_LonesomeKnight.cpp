/*
	SubmissionId	    :	7755502
	ContestId           :	1197
	ProblemName         :	Lonesome Knight
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1197
*/

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	char a[100][3];
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		if(!strcmp(a[i], "a1") || !strcmp(a[i], "a8") || !strcmp(a[i], "h1") || !strcmp(a[i], "h8"))
			cout << 2 << endl;

		if(!strcmp(a[i], "b1") || !strcmp(a[i], "a2") || !strcmp(a[i], "g1") || !strcmp(a[i], "h2") ||
		    !strcmp(a[i], "a7") || !strcmp(a[i], "b8") || !strcmp(a[i], "h7") || !strcmp(a[i], "g8"))
			cout << 3 << endl;

		if(!strcmp(a[i], "a3") || !strcmp(a[i], "a4") || !strcmp(a[i], "a5") || !strcmp(a[i], "a6") ||
		    !strcmp(a[i], "b2") || !strcmp(a[i], "b7") || !strcmp(a[i], "c1") || !strcmp(a[i], "c8") ||
		    !strcmp(a[i], "d1") || !strcmp(a[i], "d8") || !strcmp(a[i], "e1") || !strcmp(a[i], "e8") ||
		    !strcmp(a[i], "f1") || !strcmp(a[i], "f8")|| !strcmp(a[i], "g2") || !strcmp(a[i], "g7") ||
		    !strcmp(a[i], "h3") || !strcmp(a[i], "h4") || !strcmp(a[i], "h5") || !strcmp(a[i], "h6"))
			cout << 4 << endl;

		if(!strcmp(a[i], "b3") || !strcmp(a[i], "b4") || !strcmp(a[i], "b5") || !strcmp(a[i], "b6") ||
		    !strcmp(a[i], "c2") || !strcmp(a[i], "c7") || !strcmp(a[i], "d2") || !strcmp(a[i], "d7") ||
		    !strcmp(a[i], "e2") || !strcmp(a[i], "e7") || !strcmp(a[i], "f2") || !strcmp(a[i], "f7") ||
		    !strcmp(a[i], "g3") || !strcmp(a[i], "g4") || !strcmp(a[i], "g5") || !strcmp(a[i], "g6"))
			cout << 6 << endl;

		if(!strcmp(a[i], "c3") || !strcmp(a[i], "c4") || !strcmp(a[i], "c5") || !strcmp(a[i], "c6") ||
		    !strcmp(a[i], "d3") || !strcmp(a[i], "d4") || !strcmp(a[i], "d5") || !strcmp(a[i], "d6") ||
		    !strcmp(a[i], "e3") || !strcmp(a[i], "e4") || !strcmp(a[i], "e5") || !strcmp(a[i], "e6") ||
		    !strcmp(a[i], "f3") || !strcmp(a[i], "f4") || !strcmp(a[i], "f5") || !strcmp(a[i], "f6"))
			cout << 8 << endl;
	}

	getch();
	return 0;
}