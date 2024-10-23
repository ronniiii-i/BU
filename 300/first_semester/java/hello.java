/**
 * hello
 */
public class hello {
    public static void main(String a[]) {
        // System.out.print("hello world");
        System.out.println(3 + 5); //println is print plus newline

        int num = 3;
        System.out.println(num);

        double point = 1.3;
        System.out.println(point);

        float poin2 = 3.4f; //f is needed to make sure it is seen as a float since double is default in java
        System.out.println(poin2);

        long l = 45678l;//l is need to make it recognise it as long
        System.out.println(l);

        boolean b = false;//it is defined with boolean not bool
        System.out.println(b);

        //literals
        System.out.println("\n==========\nLiterals\n==========");
        int num1 = 0b101;
        System.out.println(num1);

        //type conversion and casting
        System.out.println("\n==========\nType Conversion and Casting\n==========");
        int num2 = 10;
        double point2 = (double) num2; //casting is needed to convert int to double
        System.out.println(point2);

        // byte by = 127;
        int n = 123455; //n = by -> conversion
        byte k = (byte) n; // k = (datatype) n -> casting
        System.out.println(k);

        //type promotion
        System.out.println("\n==========\nType Promotion\n==========");
        byte num3 = 10;
        byte num4 = 20;
        int num5 = num3 * num4;// promoting to int cause the operation result is larger than byte max number (127)
        System.out.println(num5);

        //operators
        System.out.println("\n==========\nOperators\n==========");
        int num6 = 10;
        int num7 = 20;
        
        int add = num6 + num7;
        System.out.println(add);

        int sub = num7 - num6;
        System.out.println(sub);

        int mod = num7 % num6;
        System.out.println(mod);

        num6+=7;
        System.out.println(num6);

        num7--;
        System.out.println(num7);
        
        
    }
}