/*
	SubmissionId	    :	35359371
	ContestId           :	938
	Index               :	B
	ProblemName         :	Run For Your Prize
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/938/problem/B
*/

package Codeforces;

import java.util.Scanner;

public class RunForYourPrize {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int j = 0;
        int n = input.nextInt();
        int[] A = new int[n];
        int[] B = new int[n];

        for (int i = 0; i < n; i++) {
            A[i] = input.nextInt();
        }

        for (int l = 0; l < n; l++) {
            if (A[l] > 500000)
                B[j] = 1000000 - A[l];
            else B[j] = A[l] - 1;
            j++;
        }

        int max = B[0];

        for (int k = 1; k < n; k++)
            if (B[k] > max)
                max = B[k];

        System.out.print(max);
    }
}
