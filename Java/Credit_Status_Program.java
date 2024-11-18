import java.util.Scanner;
public class Credit_Status_Program{
public static void main(String[] args){
Scanner scanner= new Scanner(System.in);

while(true) {
System.out.println("Enter Account Number: ");
int accountNumber= scanner.nextInt();

if (accountNumber <= 0) {
    System.out.println("Program ends.");
    break;
}

System.out.println("Enter Beginning Balance: ");
double beginningBalance = scanner.nextDouble();
System.out.println("Enter Total Charges: "); 
double totalCharges = scanner.nextDouble();
System.out.println("Enter Total Credits: "); 
double totalCredits = scanner.nextDouble(); 
System.out.println("Enter Credit Limit: "); 
double creditLimit = scanner.nextDouble();

double newBalance = (beginningBalance + totalCharges)-totalCredits;

if (newBalance > creditLimit) {
System.out.printf("\nAccount Number: %d", accountNumber); 
System.out.printf("\nNew Balance: %.2f", newBalance);
System.out.printf("\nCredit Limit: %.2f", creditLimit);
System.out.printf("\nCredit Limit Exceeded.\n\n");
} else {
    System.out.printf("\nYou have not exceeded your credit limit\n\n");
}
}
}
}