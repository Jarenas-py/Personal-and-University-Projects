#include <stdio.h>
int main()
{
	printf("What is the Temperature? \n \n");
	
	float T;
	printf("If the temperature is below 27 C, it is considered cold. \nWhen the temperature is 27 and above, it is considered hot \n \n");
	printf("Enter the current temperature:");
	scanf("%f", &T);
	
	if(T<27){
	printf("\n \nIt's cold right now!");
	} else {
	printf("It's hot right now!");
	}
	
return 0;
}