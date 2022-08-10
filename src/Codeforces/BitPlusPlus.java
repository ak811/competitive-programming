/*
	SubmissionId	    :	35318342
	ContestId	        :	282
	Index	            :	A
	ProblemName         :	Bit++
	ProgrammingLanguage	:	Java
	Verdict	            :	OK
	Author              :   ak811
	https://codeforces.com/contest/282/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class BitPlusPlus {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        String a;
        int count = 0;

        for (int i = 0; i < n; i++) {
            a = input.next();
            switch (a) {
                case "++X", "X++" -> count++;
                case "--X", "X--" -> count--;
            }
        }

        System.out.println(count);
    }

}
