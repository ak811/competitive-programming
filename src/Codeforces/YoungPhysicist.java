/*
	SubmissionId	    :	35559326
	ContestId           :	69
	Index               :	A
	ProblemName         :	Young Physicist
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/69/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class YoungPhysicist {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int[] A = new int[n * 3];
        int sum1 = 0, sum2 = 0, sum3 = 0;

        for (int i = 0; i < n * 3; i++)
            A[i] += input.nextInt();

        for (int j = 0; j < n * 3; j += 3) {
            sum1 += A[j];
            sum2 += A[j + 1];
            sum3 += A[j + 2];
        }

        System.out.println(sum1 == 0 && sum2 == 0
                && sum3 == 0 ? "YES" : "NO");
    }

}
