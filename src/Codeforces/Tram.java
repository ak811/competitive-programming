/*
	SubmissionId	    :	35555348
	ContestId           :	116
	Index               :	A
	ProblemName         :	Tram
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/116/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class Tram {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int s = -1, k = 0;
        int[] A = new int[n * 2];
        int[] max = new int[n * 2];

        for (int i = 0; i < n * 2; i++)
            A[i] = input.nextInt();

        int maximum = 0;
        for (int j = 0; j < n * 2; j++) {
            max[k] += s * A[j];
            if (max[k] > maximum)
                maximum = max[k];
            s = -s;
        }

        System.out.println(maximum);
    }
}
