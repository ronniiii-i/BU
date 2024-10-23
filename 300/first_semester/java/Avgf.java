import java.io.*;
import java.util.*;

public class Avgf {
    public static void main(String[] args) throws FileNotFoundException {
        double avg;
        int num1, num2, num3;

        System.out.println("Input read from file \"infile.xt\"");
        Scanner input = new Scanner(new FileReader("infile.txt"));

        num1 = input.nextInt();
        num2 = input.nextInt();
        num3 = input.nextInt();

        avg = (num1 + num2 + num3) / 3;

        System.out.println("Out put is written to file \"outfile.txt\"");
        PrintWriter output = new PrintWriter("outfile.txt");
        output.println("The avg of the numbers are: " + avg);

        input.close();
        output.close();
    }
}