import java.util.Scanner;

public class SI {
    public static void main(String[] args) {
        double si, p, r, t;

        Scanner sc = new Scanner(System.in);
        System.out.println("Input the Principal: ");
        p = sc.nextDouble();

        System.out.println("Input the Interest rate:");
        r = sc.nextDouble();

        System.out.println("Input the time:");
        t = sc.nextDouble();

        si = (p * r * t) / 100;

        System.out.println("Simple Interest: " + si);
    
        sc.close();
    }
}