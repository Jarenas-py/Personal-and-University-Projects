#include <stdio.h>
int main()
{
    int d;
    printf("1= List of Odd Numbers\n2= List of Even Numbers\n");
    printf("Answer: ");
    scanf("%d", &d);
    
    switch(d) {
        case 1:
        for (int i=1; i<=21; i+=2) {
            printf(" %d", i);
        }
        break;
        
        case 2:
        for (int i=2; i<=22; i+=2) {
        printf(" %d", i);}
        break;
        
        default:
        printf("Error: Enter a valid input\n");
    }
    
return 0;
}