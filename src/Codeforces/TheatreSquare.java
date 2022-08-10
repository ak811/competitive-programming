/*
    SubmissionId	    :	35313219
	ContestId	        :	1
	Index	            :	A
	ProblemName         :	Theatre Square
	ProgrammingLanguage	:	Java
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/1/problem/A
 */

package Codeforces;

import java.util.Scanner;

public class TheatreSquare {
    public static void main(String[] args) {
        Scanner c = new Scanner(System.in);

        int sub = 0, sub1 = 0, num1 = 0, num = 0;
        int n = c.nextInt();
        int m = c.nextInt();
        int a = c.nextInt();

        do {
            sub += m - a;
            num++;
        }
        while (sub > 0);

        do {
            sub1 += n - a;
            num1++;
        }
        while (sub1 > 0);

        System.out.println(num1 + num - 1 + (num1 - 1) * (num - 1));
    }

}

