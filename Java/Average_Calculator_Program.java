public class Average_Calculator_Program{
    public static void main(String[] args){

        // Declare the identifiers with their variables. 
        int num1= 125;
        int num2= 28;
        int num3= -25;

        // Make an identifier for the sum of the three specified values.
        int sum= num1 + num2 + num3; 

        // Make an identifier and create a formula to get the average given the identifier of sum.
        int ave= sum / 3;

        // Code the following print statments and add "+ 'identifier'" in order to output the stored values.
        System.out.println("num1 = " + num1);
        System.out.println("num2 = " + num2);
        System.out.println("num3 = " + num3);
        System.out.println("");

        // Print the 'ave' in order to present the average in the terminal.
        System.out.print("Average = ");
        System.out.println(ave);
    }
}