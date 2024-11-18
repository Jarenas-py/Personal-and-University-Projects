 #include <stdio.h>
int main()
{
	printf("Area of Rectangle Calculator\n \n");
	
	float L;
	printf("Input the Length: \n");
	scanf("%f", &L);
	
	float W;
	printf("Input the Width: \n");
	scanf("%f", &W);
	
	float A;
	A= L*W;
	printf("The Area of the Rectangle is: \t%f", A);
	
	return 0;
}