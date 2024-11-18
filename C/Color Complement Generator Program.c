#include <stdio.h>
int main()
{
   int color;
   printf("Complementary Colors\n \n");
   printf("Enter a number to know the complementary color of a given color.\nType 1 for Red.\nType 2 for Orange.\nType 3 for Yellow.\nType 4 for Green\nType 5 for Blue.\n Type 6 for Violet\n \n");
   printf("Enter a number: ");
   scanf("%d", &color);
   
   switch (color) {
       case 1:
       printf("Red= Green\n");
       break;
       
       case 2:
       printf("Orange= Blue\n");
       break;
       
       case 3:
       printf("Yellow= Violet\n");
       break;
       
       case 4:
       printf("Green= Red\n");
       break;
       
       case 5:
       printf("Blue= Orange\n");
       break;
       
       case 6:
       printf("Violet= Yellow\n");
       break;
       
       default:
       printf("Invalid Input. Please refresh.\n");
   }
  
  return 0;
}