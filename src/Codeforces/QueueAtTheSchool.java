/*
	SubmissionId	    :	35560411
	ContestId           :	266
	Index               :	B
	ProblemName         :	Queue at the School
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/266/problem/B
*/

package Codeforces;

import java.util.Scanner;

public class QueueAtTheSchool {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        String s = input.next();
        char[] sAry = s.toCharArray();

        for (int i = 0; i < t; i++)
            for (int j = 0; j + 1 < sAry.length; j++)
                if (sAry[j] == 'B' && sAry[j + 1] == 'G') {
                    sAry[j] = 'G';
                    sAry[j + 1] = 'B';
                    j++;
                }

        for (char c : sAry) System.out.print(c);
    }
}
