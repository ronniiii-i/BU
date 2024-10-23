import java.util.Scanner;

public class BMI {
    public static void main(String[] args) {

        double bmi, weight, height;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your weight (in kg):");
        weight = sc.nextDouble();

        System.out.println("Enter your height (in m):");
        height = sc.nextDouble();

        bmi = weight/(height * height);

        System.out.println("Your BMI is " + bmi);

        sc.close();
    }
}