/*
	SubmissionId	    :	38571650
	ContestId           :	133
	Index               :	A
	ProblemName         :	HQ9+
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/133/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class HQ9Plus {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        System.out.println(check(str) ? "YES" : "NO");
    }

    private static boolean check(String str) {
        int count = 0;

        for (int i = 0; i < str.length(); i++)
            switch (str.charAt(i)) {
                case 'H', 'Q', '9' -> count++;
            }

        return count >= 1;
    }
}
