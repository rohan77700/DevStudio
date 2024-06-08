import java.text.NumberFormat;
import java.util.Arrays;
import java.util.Date;
import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World!");

        // Variables
        int myAge = 24;
        int herAge = myAge;
        System.out.println(herAge);

        // Primitive Types
        byte age = 24;
        long viewsCount = 3_123_456_789L;
        float price = 10.99F;
        char letter = 'A';
        boolean isEligable = false;
        System.out.println(age);
        System.out.println(viewsCount);
        System.out.println(price);
        System.out.println(letter);
        System.out.println(isEligable);

        // Reference Types
        Date now = new Date();
        System.out.println(now);

        // Strings
        // String messsage = new String("Hello String") // long form to initialize a string variable 
        String message = "Hello, Java Developer!!";
        System.out.println(message);
        System.out.println(message.endsWith("!!"));
        System.out.println(message.startsWith("!!"));
        System.out.println(message.indexOf("Java"));
        String messages = "!! String" + "concatination !!"; // string concatination
        System.out.println(messages);
        System.out.println(messages.replace("!", "*"));
 
        // Escape Sequences
        String escappedDoubleQuotes = "Hello \"World\"";
        String escappedForwardSlash = "c:\\Windows\\...";
        String escappedNewLine = "c:\nWindows\\...";
        String escappedTab = "c:\tWindows\\...";
        System.out.println(escappedDoubleQuotes);
        System.out.println(escappedForwardSlash);
        System.out.println(escappedNewLine);
        System.out.println(escappedTab);


        // Arrays
        int[] number = new int[5]; // 5 in int[5] specifies the size of the array
        number[0] = 1;
        number[1] = 2;
        System.out.println(Arrays.toString(number));
        int[] numbers = { 2, 3, 5, 1, 5}; // simplier way of initializing
        System.out.println(numbers.length);

        // Multi-Dimensional Arrays
        int[][] twoDimensionalArray = new int[2][3]; // two rows and three columns
        twoDimensionalArray[0][0] = 1;
        System.out.println(Arrays.deepToString(twoDimensionalArray));
        // currly brace syntax - for quick initialization
        int[][] twoDArrays = { { 1, 2, 3}, { 4, 5, 6} }; // two rows and three columns
        System.out.println(Arrays.deepToString(twoDArrays));

        // Constants
        final float PI = 3.14F; // "final" keyword treats variable as a constant
        System.out.println(PI);

        // Arithmetic Expressions
        int result = 10 + 3;
        System.out.println(result);
        int result1 = 10 / 3;
        System.out.println(result1);
        // to get a floating point, we need to convert to a 'float' or a 'double'
        double result2 = (double)10 / (double)3;
        System.out.println(result2);
        // increment and decrement operators
        int x = 1;
        x++; // increment
        System.out.println(x);
        int y = 1;
        y--; // decrement
        System.out.println(y);
        // augmented or compound assignment opperator
        x += 2;
        System.out.println(x);
    
        // Order of Opperations : from highest to lowest priority
        /*** 
        () -> parentheses
        * / -> multiplication and division
        + - -> addition and subtraction
        ***/
        int z = 10 + 3 * 2;
        System.out.println(z);

        // Casting
        // Implicit casting
        // byte > short > int > long > float > double
        short a = 1;
        int b = a + 2;
        System.out.println(b);
        double a0 = 1.1;
        double b0 = a0 + 2;
        System.out.println(b0);
        // Explicit casting
        double a1 = 1.1;
        int b1 = (int)a1 + 2;
        System.out.println(b1);
        // String to int conversion
        String a2 = "1";
        int b2 = Integer.parseInt(a2) + 2; // similarly we have parseShort(), parseFloat(), parseDouble
        System.out.println(b2);
        
        // The Math Class
        int resultRound = Math.round(1.1F);
        System.out.println(resultRound);
        // ceiling
        int resultCeiling = (int)Math.ceil(1.1F);
        System.out.println(resultCeiling);
        // floor
        int resultFloor = (int)Math.floor(1.1F);
        System.out.println(resultFloor);
        // max
        int maxMath = Math.max(1, 2);
        System.out.println(maxMath);
        // min
        int minMath = Math.min(1, 2);
        System.out.println(minMath);
        // random
        double randomMath = Math.random();
        System.out.println(randomMath) ;
        double randomRangeMath = Math.round(Math.random() * 100);
        System.out.println(randomRangeMath);
    
        // Formatting Numbers
        // NumberFormat currency = new NumberFormat() // NumberFormat() is an abstract; cannot be instanciated
        NumberFormat currency = NumberFormat.getCurrencyInstance(); // <- this is a factory method
        String currencyResult = currency.format(1234567.891);
        System.out.println(currencyResult);
        String percentResult = NumberFormat.getPercentInstance() .format(0.1);
        System.out.println(percentResult);
    
        // Reading Input
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Age: ");
            int userAge = scanner.nextInt();
            System.out.println("You are " + userAge);
            System.out.print("Name: ");
            String userName = scanner.next();
            System.out.println("You are " + userName);
        }

        // Comparison Operators
        int i0 = 1;
        int j0 = 1;
        System.out.println(i0 > j0); // is greater than
        System.out.println(i0 < j0); // is less than
        System.out.println(i0 >= j0); // is greater than or equal to
        System.out.println(i0 <= j0); // is less than or equal to
        System.out.println(i0 == j0); // is equal
        System.out.println(i0 != j0); // is not equal

        // Logical Opperators
        // "and" opperator
        int temperature = 23;
        boolean isWarm = temperature > 20 && temperature < 30; 
        System.out.println(isWarm);
        // "or" opperator
        boolean hasHighIncome = false;
        boolean hasGoodCredit = true;
        boolean hasCriminalRecord = false;
        boolean hasEligible = hasHighIncome || hasGoodCredit;
        System.out.println(hasEligible);
        // "not" opperator
        boolean isEligible = (hasHighIncome || hasGoodCredit) && !hasCriminalRecord;
        System.out.println(isEligible);

        // If Statements
        int temp = 32;
        if (temp > 30) { 
            System.out.println("It's a hot day.");
            System.out.println("Drink some water.");
        } 
        else if (temp > 20 && temp <= 30) 
            System.out.println("It's a beautiful day.");
        else 
            System.out.println("It's a cold day.");

        // Simplifying If Statements
        // int income = 120_000;
        // amature
        /* 
        boolean hasHighIncome0;
        if (income > 100_000)
            hasHighIncome0 = true;
        else
            hasHighIncome0 = false;
        */

        // professional
        /*
        boolean hasHighIncome1 = false;
        if (income > 100_000)
            hasHighIncome1 = true;
        */

        // high professional
        // boolean hasHighIncome2 = income > 100_000;

        // The Ternary Operator
        // amature
        /*
        String className;
        if (income > 100_000)
            className = "First";
        else
            className = "Economy";
        */
        
        // professional
        /*
        String className2 = "Economy";
        if (income > 100_000)
            className = "First";
        */

        // high professional
        // String className3 = income > 100_000 ? "First" : "Economy";

        // Switch Statements
        String role = "admin";
        
        // switch (role) {
        //     case "admin":
        //         System.out.println("You're an admin");
        //         break;

        //     case "moderator":
        //         System.out.println("You're an moderator");
        //         break;
                
        //     default:
        //         System.out.println("You're a guest");
        // }

        switch (role) {
            case "admin" -> System.out.println("You're an admin");

            case "moderator" -> System.out.println("You're an moderator");
                
            default -> System.out.println("You're a guest");
        }
       
        // For Loops
        for (int i = 0; i < 5; i++)
            System.out.println("Hello World " + i);

        for (int j = 5; j > 0; j--)
            System.out.println("Hello World " + j);

        // While Loops
        int i = 5;
        while (i > 0) {
            System.out.println("Hello World " + i);
            i--;
        }
        
        try (Scanner scan = new Scanner(System.in)) {
            String input = "";
            while (!input.equals("quit")) {
                System.out.print("Input: ");
                input = scan.next().toLowerCase();
                System.out.println(input);
            }

            // Do...While Loops
            do {
                System.out.print("Input: ");
                input = scan.next().toLowerCase();
                System.out.println(input);
            } while (!input.equals("quit"));

            // Break and Continue
            while (true) {
                System.out.print("Input: ");
                input = scan.next().toLowerCase();
                if (input.equals("pass"))
                    continue;
                if (input.equals("quit"))
                    break;
                System.out.println(input);
            }
        }
        // For-Each Loop
        String[] fruits = { "Apple", "Mango", "Orange" };

        // for (int k = 0; k < fruits.length; k++)                
        //     System.out.println(fruits[k]);

        for (String fruit : fruits)
            System.out.println(fruit);
    }
}