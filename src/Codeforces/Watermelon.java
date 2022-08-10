/*
    SubmissionId	    :	35290111
	ContestId	        :	4
	Index	            :	A
	ProblemName         :	Watermelon
	ProgrammingLanguage	:	Java
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/4/problem/A
 */

package Codeforces;

import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();

        System.out.println(n == 2 ? "NO" : n % 2 == 0 ? "YES" : "NO");
    }
}