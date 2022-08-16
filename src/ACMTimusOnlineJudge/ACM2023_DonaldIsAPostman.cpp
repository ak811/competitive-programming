/*
	SubmissionId	    :	7759861
	ContestId           :	2023
	ProblemName         :	Donald is a postman
	ProgrammingLanguage :	Visual C++ 2017
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=2023
*/

#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;

int main() {
	int flag = 0, flag1 = 1, flag2 = 2, flag3 = 3;
	int n , i, a = 1;
	char M[1000][100];
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> M[i];
		switch (M[i][0]) {
		case 'A':
		case 'P':
		case 'O':
		case 'R':
			if(a == 3)
				flag += flag3 - flag1;
			else if(a == 2)
				flag += flag2 - flag1;
			a = 1;
			continue;
		case 'B':
		case 'M':
		case 'S':
			if(a == 1)
				flag += flag2 - flag1;
			else if(a == 3)
				flag += flag3 - flag2;
			a = 2;
			continue;
		case 'D':
		case 'G':
		case 'J':
		case 'K':
		case 'T':
		case 'W':
			if(a == 1)
				flag += flag3 - flag1;
			else if(a == 2)
				flag += flag3 - flag2;
			a = 3;
			continue;
		}
	}

	cout << flag;

	getch();
	return 0;
}