/*
	SubmissionId	    :	35791547
	ContestId           :	131
	Index               :	A
	ProblemName         :	cAPS lOCK
	ProgrammingLanguage :	MS C++
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/131/problem/A
*/

#include <iostream>
using namespace std;

int strLen(char str[101]);

int main() {

	char A[101];
	int count = 0, d = 'a' - 'A';
	cin >> A;

	for(int i = 0; A[i]; i++)
		if(A[i] >= 'A' && A[i] <= 'Z')
			count++;

	if(count == strLen(A)) {

		for(int j = 0; A[j]; j++)
			A[j] += d;

	    for(int k = 0; A[k]; k++)
		    cout << A[k];

	} else {

	    count=0;

	    for(int l=1;A[l];l++) {
		    if(A[0]>='a' && A[0]<='z' && A[l]>='A' && A[l]<='Z')
			    count++;
		}

	    if(count==strLen(A)-1) {
		    A[0]-=d;
		    for(int m=1;A[m];m++)
			    A[m]+=d;
	    }

	    for(int k=0;A[k];k++){
		    cout<<A[k];
		}
	}

	return 0;
}

int strLen(char str[101]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}