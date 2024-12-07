import java.util.Scanner;
public class DifferentCalculators_Program {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    while(true){
    System.out.println("\nChoose your Calculator:\n(1) Area of Circle Calculator\n(2) Area of Rectangle\n(3) Area of Triangle\n(4) Area of Square");
    int c = scanner.nextInt();
    
    scanner.nextLine();
    
    if (c < 1 || c >4){
        System.out.println("Enter a valid option");
        continue;
    }
    
    switch (c) {
        case 1: 
            System.out.println("Area of Circle Calculator\nEnter the Radius:");
            float radius = scanner.nextFloat();
            float areaCircle= (radius * radius) * 3.14f;
            System.out.printf("The Area of the Circle is %.2f", areaCircle);
            break;
            
        case 2:
            System.out.println("Area of Rectangle Calculator\nEnter the Length:");
            float length = scanner.nextFloat();
            System.out.println("Enter the Width: ");
            float width = scanner.nextFloat();
            float areaofRectangle= length * width;
            System.out.printf("The Area of the Rectangle is  %.2f", areaofRectangle);
            break;
            
        case 3:
            System.out.println("Area of Triangle Calculator\nEnter the Base Value:");
            float base = scanner.nextFloat();
            System.out.println("Enter the Height: ");
            float height = scanner.nextFloat();
            float areaofTriangle = (base * height)/2f;
            System.out.printf("The Area of the Triangle %.2f", areaofTriangle);
            break;
            
        case 4:
            System.out.println("Area of Square Calculator\nEnter the side of the square: ");
            float side = scanner.nextFloat();
            float areaofSquare= side * side;
            System.out.printf("The answer is is %.2f", areaofSquare);
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