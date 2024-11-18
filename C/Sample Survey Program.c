#include <stdio.h>
 int main()
 {
    printf("Program Survey\n \n");
    
    int s;
    printf("This is a 2 question survey about the program itself.\nType 1 for 1 satisfactory.\nType 2 for neutral.\nType 3 for unsatisfactory.\n \n");
    printf("Does the program utilize the switch syntax properly?\nAnswer: ");
    scanf("%d", &s);
    
    switch(s){
    case 1:
    printf("We are glad you feel that way!\n \n");
    break;
    
    case 2:
    printf("We will improve our program!\n \n");
    break;
    
    case 3:
    printf("We are sorry about that. We will do better!\n \n");
    break;
    
    default:
    printf("Error: Enter a valid input. Please refresh the program.\n \n");
    return s;
    break;
    }
    
    int b;
    printf("Are you satisfied with the overall program?\nAnswer: ");
    scanf("%d", &b);
    
    switch(b){
    case 1:
    printf("We are glad you feel that way!\n \n");
    break;
    
    case 2:
    printf("We will improve upon our program!\n \n");
    break;
    
    case 3:
    printf("We are sorry about that. We will do better!\n \n");
    break;
    
    default:
    printf("Error: Enter a valid input. Please refresh the program.\n \n");
    return 0;
    }
    
    printf("Survey has ended. Thank you for your feedback!");
    
return 0;
 }