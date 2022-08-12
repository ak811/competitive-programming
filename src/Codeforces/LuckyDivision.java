/*
	SubmissionId	    :	35557502
	ContestId           :	122
	Index               :	A
	ProblemName         :	Lucky Division
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/122/problem/A
*/

package Codeforces;

import java.util.Scanner;

class LuckyDivision {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int flag = 0;
        int[] nums = {4, 7, 44, 77, 47, 74, 444,
                477, 744, 777, 447, 474, 747, 774};

        for (int num : nums)
            if (n % num == 0) {
                flag = 1;
                break;
            }

        System.out.println(flag == 1 ? "YES" : "NO");
    }

}