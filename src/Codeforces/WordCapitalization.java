/*
	SubmissionId	    :	35520272
	ContestId           :	281
	Index               :	A
	ProblemName         :	Word Capitalization
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/281/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class WordCapitalization {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        s = s.substring(0, 1).toUpperCase() + s.substring(1);
        System.out.println(s);
    }
}
