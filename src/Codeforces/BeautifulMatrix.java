/*
	SubmissionId	    :	35789497
	ContestId           :	263
	Index               :	A
	ProblemName         :	Beautiful Matrix
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/263/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class BeautifulMatrix {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int k = 0, l = 0;
        int[][] A = new int[5][5];

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++) {
                A[i][j] = input.nextInt();
                if (A[i][j] == 1) {
                    k = i;
                    l = j;
                }
            }

        System.out.println(Math.abs(2 - k) + Math.abs(2 - l));
    }
}
