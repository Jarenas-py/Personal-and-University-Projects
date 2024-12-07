#include <stdio.h>

int main()
{
float W1, W2;
printf("Input the weight of the two items:");
scanf("%f %f", &W1, &W2);

float P1, P2;
printf("Input the prices of the two items:");
scanf("%f %f", &P1, &P2);

float WP3;
WP3= (W1+W2+P1+P2)/4;
printf("The Average Value is: %f", WP3);

return 0;
}