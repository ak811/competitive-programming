/*
	SubmissionId	    :	7748076
	ContestId           :	1877
	ProblemName         :	Bicycle Codes
	ProgrammingLanguage :	Java 1.8
	Verdict             :	OK
	Author              :   ak811
	https://acm.timus.ru/problem.aspx?space=1&num=1877
*/

package ACMTimusOnlineJudge;

import java.util.Scanner;

public class ACM1877_BicycleCodes {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String a = input.next();
        String b = input.next();

        int ab = Integer.parseInt(a);
        int ac = Integer.parseInt(b);

        System.out.println(((ab % 2 == 0) || (ac % 2 != 0)) ? "yes" : "no");
    }

}