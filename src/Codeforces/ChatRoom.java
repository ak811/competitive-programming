/*
	SubmissionId	    :	35556588
	ContestId           :	58
	Index               :	A
	ProblemName         :	Chat room
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/58/problem/A
*/

package Codeforces;

import java.util.Scanner;

public class ChatRoom {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String s = input.next();
        int indexH = 0, indexE = 0, indexL = 0, indexO = 0;
        int countH = 0, countE = 0, countL = 0, countO = 0;

        for (int i = 0; i < s.length(); i++)
            if (s.charAt(i) == 'h') {
                countH++;
                indexH = i;
                break;
            }

        for (int i = indexH + 1; i < s.length(); i++)
            if (s.charAt(i) == 'e') {
                countE++;
                indexE = i;
                break;
            }

        for (int i = indexE + 1; i < s.length(); i++)
            if (s.charAt(i) == 'l') {
                countL++;
                indexL = i;
                if (countL == 2)
                    break;
            }

        for (int i = indexL + 1; i < s.length(); i++)
            if (s.charAt(i) == 'o') {
                countO++;
                indexO = i;
                break;
            }

        System.out.println(countH == 1 && countE == 1 &
                countL == 2 & countO == 1 ? "YES" : "NO");
    }
}