public class Print_ColoredText{

    // Declare the colors needed for the following statements.
    public static final String ANSI_RED = "\u001B[31m";
    public static final String ANSI_YELLOW = "\u001B[33m";
    public static final String ANSI_GREEN = "\u001B[32m";
    public static void main(String[] args){

        // Input the statements to be printed. Add the line of code for colors.
        // Add a blank print syntax for spaces in-between major statements.
        System.out.println(ANSI_RED + "BET-CPET 1-AM");
        System.out.println("");
        System.out.println(ANSI_YELLOW + "Joseph Arenas");
        System.out.println("Jordan Recaña");
        System.out.println("Lian Pacis");
        System.out.println("Michael Sayson");
        System.out.println("");
        System.out.println(ANSI_GREEN + "'Try and try until you succeed...'");
    }
}