/*
	SubmissionId	    :	7754528
	ContestId           :	1567
	ProblemName         :	SMS-spam
	ProgrammingLanguage :	G++ 7.1
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1567
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char A[1000];
	int i, num1 = 0, num2 = 0, num3 = 0;
	gets(A);

	for(i = 0; A[i]; i++){
		if(A[i] == 'a'|| A[i] == 'd' || A[i] == 'g' || A[i] == 'j' ||
		    A[i] == 'm' || A[i] == 'p' || A[i] == 's' || A[i] == 'v' ||
		    A[i] == 'y' || A[i] == '.' || A[i] == ' ')
		    num1++;

		else if(A[i] == 'b'|| A[i] == 'e' || A[i] == 'h' || A[i] == 'k' ||
		        A[i] == 'n' || A[i] == 'q' || A[i] == 't' || A[i] == 'w' ||
		        A[i] == 'z' || A[i] == ',')
			num2+=2;

		else if(A[i] == 'c'|| A[i] == 'f' || A[i] == 'i' ||
		        A[i] == 'l' || A[i] == 'o' || A[i] == 'r' ||
		        A[i] == 'u' || A[i] == 'x' || A[i] == '!')
			num3+=3;
	}

	cout << num1 + num2 + num3;

	getch();
	return 0;
}