/*
	SubmissionId	    :	35290111
	ContestId	        :	271
	Index	            :	A
	ProblemName         :	Beautiful Year
	ProgrammingLanguage	:	Java
	Verdict	            :	OK
	Author              :   ak811
	https://codeforces.com/contest/271/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class BeautifulYear {
    public static void main(String[] args) {
        int a = new Scanner(System.in).nextInt() + 1;
        while (!isDistinct(a)) {
            a++;
        }
        System.out.println(a);
    }

    public static boolean isDistinct(int num) {
        String s = String.valueOf(num);
        int[] count = new int[10];
        for (int i = 0; i < s.length(); i++) {
            switch (s.charAt(i)) {
                case '0' -> count[0]++;
                case '1' -> count[1]++;
                case '2' -> count[2]++;
                case '3' -> count[3]++;
                case '4' -> count[4]++;
                case '5' -> count[5]++;
                case '6' -> count[6]++;
                case '7' -> count[7]++;
                case '8' -> count[8]++;
                case '9' -> count[9]++;
            }
        }

        for (int j : count)
            if (j > 1)
                return false;
        return true;
    }
}
