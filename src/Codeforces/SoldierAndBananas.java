/*
	SubmissionId	    :	35558824
	ContestId           :	546
	Index               :	A
	ProblemName         :	Soldier and Bananas
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/546/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class SoldierAndBananas {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int sum = 0;
        int k = input.nextInt();
        int n = input.nextInt();
        int w = input.nextInt();

        for (int i = 1; i <= w; i++)
            sum += k * i;

        System.out.println(Math.max(sum - n, 0));
    }
}
