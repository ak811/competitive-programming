/*
	SubmissionId	    :	49336710
	ContestId           :	41
	Index               :	A
	ProblemName         :	Translation
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/41/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class Translation {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String s = input.nextLine();
        String t = input.nextLine();

        StringBuilder s2 = new StringBuilder();

        for (int i = s.length() - 1; i >= 0; i--)
            s2.append(s.charAt(i));

        System.out.println(s2.toString().equals(t) ? "YES" : "NO");

    }
}
