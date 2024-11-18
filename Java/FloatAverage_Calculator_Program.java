public class FloatAverage_Calculator_Program{
    public static void main(String[] args){

        // Declare the identifiers with their variables. 
        double num1= 75.35;
        double num2= -35.56;
        double num3= 15.76;

        // Make an identifier for the sum of the three specified values.
        double sum= num1 + num2 + num3; 

        // Make an identifier and create a formula to get the average given the identifier of sum.
        double ave= sum / 3;

        // Code the following print statments and add "+ 'identifier'" in order to output the stored values.
        System.out.println("num1 = " + num1);
        System.out.println("num2 = " + num2);
        System.out.println("num3 = " + num3);
        System.out.println("");

        // Print the 'ave' in order to present the average in the terminal.
        System.out.print("Average = ");

        // Add the specified code in order to bring the average output into two decimal places.
        System.out.println(String.format("%.2f",ave));
    }
}