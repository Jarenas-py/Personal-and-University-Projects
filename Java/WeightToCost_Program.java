import java.util.Scanner;
public class WeightToCost_Program {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    final double baseCost = 5.0;
    final double excessCost = 2.0;
    final int maxWeight = 1000;
    final int baseWeight = 300;

    System.out.print("Enter the weight of the parcel (grams): ");
        int weight = scanner.nextInt();

    if (weight < 0 || weight > maxWeight) {
        System.out.println("Invalid weight. Please enter a value between 0 and " + maxWeight + "grams.");
    scanner.close();
    return;
}
double totalCost;
if (weight <= baseWeight) {
    totalCost = baseCost;
} else {
    int excessWeight = weight - baseWeight;
    int finalCost = (int) Math.ceil(excessWeight/100.0);
        totalCost= baseCost +finalCost * excessCost;
}
    System.out.printf("The cost of sending a %d gram parcel is: P%.2f\n", weight, totalCost);
        scanner.close();
}
}
