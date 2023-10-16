import java.util.Scanner;

public class Main {

    public static void longestStreak(String str)
    {

        int cur_streak = 0;
        int max_streak = 0;

        //char cur_char = str.charAt(0);
        char max_char = str.charAt(0);;

        for (int i=0; i<str.length()-1; i++)
        {
            cur_streak=1;

            for (int j = i+1; j<str.length(); j++)
            {
                if (str.charAt(i)==str.charAt(j))
                {
                    cur_streak++;

                }
                else
                {
                    break;
                }
            }
            if (cur_streak>max_streak)
            {
                max_streak = cur_streak;
                max_char = str.charAt(i);
            }

        }




        System.out.println(max_char + " " + max_streak);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        longestStreak(scan.nextLine());


    }
}
