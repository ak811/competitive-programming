/*
	SubmissionId	    :	35526777
	ContestId           :	617
	Index               :	A
	ProblemName         :	Elephant
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/617/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class Elephant {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(n % 5 == 0 ? n / 5 : (n / 5) + 1);
    }
}
