#include <stdio.h>
int main ()
{
    int d;
    printf("You have received an email by doctorthekorg@gmail.com.\nDownload the file and execute immediately?\n");
    printf("1= Yes\n2= No\n");
    printf("Answer: ");
    scanf("%d", &d);
    
    switch(d) {
        case 1:
        for (int i=1; i<=200; i++) {
            printf("YOU HAVE BEEN HACKED!\n\nILOVEYOU\n");
        }
        return 0;
        break;
        
        case 2:
        printf("You have succesfully evaded a virus.\n");
        break;
        
        case 3:
        printf("Error: Enter a valid input\n");
        break;
    }
    
return 0;
}