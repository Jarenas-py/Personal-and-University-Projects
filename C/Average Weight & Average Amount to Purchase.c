#include <stdio.h>

int main()
{
float W1, W2;
printf("Input the weight of the two items:");
scanf("%f %f", &W1, &W2);

float P1, P2;
printf("Input the prices of the two items:");
scanf("%f %f", &P1, &P2);

float W3;
W3= (W1 + W2)/2;
printf("Average Weight: %f\n", W3);

float P3;
P3= (P1+P2)/2;
printf("Average Amount of Purchae:%f", P3);

return 0;
}