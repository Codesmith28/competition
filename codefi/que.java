import java.util.Scanner;

public class que {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            int str = in.nextInt();
            String s = Integer.toBinaryString(str);
            String temp_s = "";
            for (int j = s.length()-1; j >= 0 ; j--) {
                temp_s += s.charAt(j);
            }
            if(temp_s.equals(s))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
