/*
	SubmissionId	    :	35559946
	ContestId           :	110
	Index               :	A
	ProblemName         :	Nearly Lucky Number
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/110/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class NearlyLuckyNumber {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int count = 0;
        int[] nums = {4, 7, 44, 77, 47, 74, 444, 477,
                744, 777, 447, 474, 747, 774};

        String s = input.next();
        for (int i = 0; i < s.length(); i++) {
            switch (s.charAt(i)) {
                case '4', '7' -> count++;
            }
        }

        int flag = 0;
        for (int num : nums)
            if (num == count) {
                flag = 1;
                break;
            }

        System.out.println(flag == 1 ? "YES" : "NO");
    }

}
