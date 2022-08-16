/*
	SubmissionId	    :	7761444
	ContestId           :	1585
	ProblemName         :	Penguins
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1585
*/

package ACMTimusOnlineJudge;

import java.util.Scanner;

public class ACM1585_Penguins {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n;
        String a;
        int[] count = new int[3];
        n = input.nextInt();

        for (int i = 0; i <= n; i++) {
            a = input.nextLine();
            switch (a) {
                case "Emperor Penguin" -> count[0]++;
                case "Macaroni Penguin" -> count[1]++;
                case "Little Penguin" -> count[2]++;
            }
        }

        int m = 0;
        int max = count[0];

        for (int j = 1; j < 3; j++)
            if (count[j] > max) {
                max = count[j];
                m = j;
            }

        switch (m) {
            case 0 -> System.out.print("Emperor Penguin");
            case 1 -> System.out.print("Macaroni Penguin");
            case 2 -> System.out.print("Little Penguin");
        }
    }
}