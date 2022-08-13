/*
	SubmissionId	    :	49336442
	ContestId           :	160
	Index               :	A
	ProblemName         :	Twins
	ProgrammingLanguage :	Java
	Verdict             :	OK
	Author              :   ak811
	https://codeforces.com/contest/160/problem/A
*/

package Codeforces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Twins {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        ArrayList<Integer> arrayList = new ArrayList<>();
        int n = input.nextInt();
        float sum = 0;

        for (int i = 0; i < n; i++) {
            int a = input.nextInt();
            sum += a;
            arrayList.add(a);
        }

        Collections.sort(arrayList);
        Collections.reverse(arrayList);

        float half = sum / 2;
        int sum2 = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            sum2 += arrayList.get(i);
            if (sum2 > half) break;
            else count++;
        }

        System.out.println(count + 1);
    }
}
