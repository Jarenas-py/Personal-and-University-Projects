#include <stdio.h>
int main()
{
    
    int p;
    printf("Enter your 4 number PIN: ");
    scanf("%d", &p);
    
    int s;
    printf("\n \nAre you sure with this PIN?\nInput 1 for yes. Input 2 for no\n \n");
    scanf("%d", &s);
    
    if(s == 1) {
        printf("Your password has been set to: %d", p);
    } else if(s == 2) {
        printf("Please input your password again. Please refresh to enter your PIN again.\n \n");
    } else {
        printf("Error: Input a valid input. Please refresh");
    }
    
return 0;
}