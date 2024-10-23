import java.util.Scanner;

public class Triangle {
    public static void main(String[] args){
        double area, base, height;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Base: ");
        base = sc.nextDouble();

        System.out.println("Enter the Height: ");
        height = sc.nextDouble();

        area = 0.5 * base * height;

        System.out.println("The area of the triangle is "  + area);

        sc.close();
    }
}
