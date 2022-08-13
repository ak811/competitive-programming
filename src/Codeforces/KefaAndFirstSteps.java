/*
	SubmissionId	    :	49339568
	ContestId           :	580
	Index               :	A
	ProblemName         :	Kefa and First Steps
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/580/problem/A
*/

package Codeforces;

import java.util.Arrays;
import java.util.Scanner;

public class KefaAndFirstSteps {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = input.nextInt();

        int[] count = new int[n];
        int num = 1;

        for (int i = 0; i + 1 < n; i++) {
            if (arr[i] <= arr[i + 1])
                num++;
            else
                num = 1;

            count[i] = num;
        }

        int max = Arrays.stream(count).max().getAsInt();

        System.out.println(n == 1 ? 1 : max);
    }
}
