#include <stdio.h>
int main()
{
    int w;
    printf("WEBSITE URL REPOSITORY\n \n");
    printf("Enter 1 for Youtube URL\nEnter 2 for Facebook URL\nEnter 3 for Twitter URL\n \n");
    printf("Enter a number: ");
    scanf("%d", &w);
    
    switch(w) {
        case 1:
        printf("Youtube URL: https://www.youtube.com/\n");
        break;
        
        case 2:
        printf("Facebook URL: https://www.facebook.com/\n");
        break;
        
        case 3:
        printf("Twitter URL: https://twitter.com/home\n");
        break;
        
        default:
        printf("Error: Enter a valid input. Please refresh.\n");
    }
    
return 0;
    }