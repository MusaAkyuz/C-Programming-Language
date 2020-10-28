/*
29.10.2020
by Musa Akyüz
learn to define
*/


#include <stdio.h>

#define PI 3.14

int main()  
{
	double area=0.0, radius=0.0;  
	printf("Enter radius: ");
	scanf("%lf", &radius);
	area = PI*radius*radius;
	printf("Circle Area: %lf",area);
	return 0;
}
