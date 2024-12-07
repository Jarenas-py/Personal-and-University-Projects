import java.util.Scanner;
public class LengthConversion_Calculator {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    while(true){
    System.out.println("\nChoose your conversion calculator:\n(1) cm - inches\n(2) inches - cm\n(3) feet - meter\n(4) meter - feet");
    int c = scanner.nextInt();
    
    scanner.nextLine();
    
    if (c < 1 || c > 4){
        System.out.println("Enter a valid option");
        continue;
    }
    
    switch (c) {
        case 1: 
            System.out.println("Cm to In Converter\nEnter the value to be converted.");
            float cm = scanner.nextFloat();
            float inches= cm * 0.39f;
            System.out.printf("The answer is is %.2f",inches);
            break;
            
        case 2:
            System.out.println("In to Cm Converter\nEnter the value to be converted.");
            float inch = scanner.nextFloat();
            float centimeters= inch * 2.54f;
            System.out.printf("The answer is is %.2f", centimeters);
            break;
            
        case 3:
            System.out.println("F to M Converter\nEnter the value to be converted.");
            float f = scanner.nextFloat();
            float meter= f * 0.3048f;
            System.out.printf("The answer is is %.2f", meter);
            break;
            
        case 4:
            System.out.println("M to F Converter\nEnter the value to be converted.");
            float m = scanner.nextFloat();
            float feet= m * 3.28f;
            System.out.printf("The answer is is %.2f", feet);
            break;
    }
System.out.println("\n\nDo you want to continue? Type Y or N.");
    char dec= scanner.next().charAt(0);
    if (dec == 'N'){
        break;
    }
    }
    }
}