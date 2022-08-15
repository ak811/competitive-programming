/*
	SubmissionId	    :	7752601
	ContestId           :	2100
	ProblemName         :	Wedding Dinner
	ProgrammingLanguage :	Java 1.8
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=2100
*/

package ACMTimusOnlineJudge;

import java.util.Scanner;

public class ACM2100_WeddingDinner {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        String[] names = new String[21];
        String str;
        int count = 0;

        for (int i = 0; i < n; i++)
            names[i] = input.next();

        for (int j = 0; j < n; j++) {
            str = names[j];
            if (str.indexOf('+') >= 0) {
                count++;
            }
        }

        if ((count + n + 2) == 13)
            count++;

        System.out.println((count + n + 2) * 100);
    }
}