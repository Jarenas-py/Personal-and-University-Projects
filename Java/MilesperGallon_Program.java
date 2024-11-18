import java.util.Scanner;

public class MilesperGallon_Program {
    public static void main(String[] args) { 
        Scanner scanner = new Scanner(System.in);
        
double totalMiles = 0;
double totalGallons = 0;
double gallons;
double miles;

while (true) {
    System.out.print("\nEnter the gallons used (-1 to end): "); 
    gallons= scanner.nextDouble();
if (gallons == -1) { 
    break;
}

System.out.print("Enter the miles driven: ");
miles= scanner.nextDouble();

double milesPerGallon= miles / gallons;
System.out.printf("The miles / gallon for this tank was %.6f%n", milesPerGallon);

totalMiles += miles;
totalGallons += gallons;
}

if (totalGallons != 0) {
    double average= totalMiles / totalGallons;
    System.out.printf("The overall average miles/gallon was %.6f%n", average);
    } else {
    System.out.println("No data was entered.");
    }
scanner.close();
}
}
