/*
	SubmissionId	    :	35559727
	ContestId           :	467
	Index               :	A
	ProblemName         :	George and Accommodation
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/467/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class GeorgeAndAccommodation {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int a, b, num = 0;

        for (int i = 0; i < n; i++) {
            a = input.nextInt();
            b = input.nextInt();
            if (b - a >= 2)
                num++;
        }

        System.out.println(num);
    }

}
