import java.io.*;
import java.util.*;

// Simple Interest with files

public class SIf {
    public static void main(String[] args) throws FileNotFoundException {
        double si, p, r, t;

        System.out.println("Input read from file \"input.txt\"");
        Scanner input = new Scanner(new FileReader("input.txt"));

        p = input.nextDouble();
        r = input.nextDouble();
        t = input.nextDouble();

        si = (p * r * t) / 100;

        System.out.println("Output written to file \"output.txt\"");
        PrintWriter output = new PrintWriter("output.txt");
        output.println("The SI is: " + si);
        
        input.close();
        output.close();
    }
}