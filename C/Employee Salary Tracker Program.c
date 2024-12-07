#include <stdio.h>

int main()
{
printf("Salary Employee Tracker\n");

int ID;
printf("Enter your I.D.:");
scanf("%d", &ID);

float TH;
printf("Enter your Total Hours Worked:");
scanf("%f", &TH);

float ApH;
printf("Enter the Amount of Money received per hour:");
scanf("%f",&ApH);

float S;
S= TH * ApH;
printf("Salary of Employee %d: %f php", ID, S);

return 0;
}