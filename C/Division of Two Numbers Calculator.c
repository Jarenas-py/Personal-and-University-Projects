#include <stdio.h>
int main()
{
	printf("Division Calculator \n \n");
	
	float N1, N2;
	printf("Enter Two Numbers:");
	scanf("%f %f", &N1, &N2);
	
	float N3;
	N3= N1/N2;
	printf("\nThe difference is: %f", N3);
	
	return 0;
}