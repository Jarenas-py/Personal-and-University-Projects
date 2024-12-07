#include <stdio.h>
int main()
{
	float N1, N2;
	printf("Average Calculator of Two Numbers \n \n ");
	printf("Enter Two Numbers: \n \n");
	scanf("%f %f", &N1, &N2);
	
	float N3;
	N3=(N1+N2)/2;
	printf("The Average is: %f", N3);
	
return 0;
}