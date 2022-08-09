/*
    SubmissionId	    :	38572180
	ContestId	        :	236
	Index	            :	A
	ProblemName         :	Boy or Girl
	ProgrammingLanguage	:	Java
	Verdict	            :	OK
	Author              :   ak811
    https://codeforces.com/contest/236/problem/A
 */

package Codeforces;

import java.util.Scanner;

public class BoyOrGirl {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String str = input.nextLine();

        int[] count = new int['z' + 1];

        for (int i = 'a'; i <= 'z'; i++)
            count[i] = 0;

        for (int i = 0; i < str.length(); i++)
            for (int j = 'a'; j <= 'z'; j++)
                if (str.charAt(i) == (char) j)
                    count[j]++;

        int num = 0;
        for (int i = 'a'; i <= 'z'; i++)
            if (count[i] != 0)
                num++;

        System.out.println(num % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    }
}
