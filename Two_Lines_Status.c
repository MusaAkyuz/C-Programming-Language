#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	double a1,b1,c1,a2,b2,c2;
	printf("Enter the coefficients in the equations of the two lines you want to learn\nThe coefficient of X in the first equation\nThe coefficient of Y in the first equation\nThe C value in the first equation\nThe coefficient of X in the second equation\nThe coefficient of Y in the second equation\nThe C value in the second equation");
	scanf("%lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&a2,&b2,&c2);  //Data is received from the user
	
	if((a1/a2)!=(b1/b2))  //The intersection of the lines status
	{
		if(a1*a2 + b1*b2 == 0)  //The intersection of the lines special status (perpendicular)
		{
			printf("The lines are perpendicular!\n");
		}
		else
		{
			printf("The lines intersect!\n");
		}
		double slope,angle;
		slope = (a1*b2-a2*b1) / (a1*a2+b1*b2);  //Slope is calculated
		angle = atan(slope)*180/3.1416;           //The angle in between is calculated
		printf("The angle in between two line: %3.2lf", angle); printf("°\n");
		double x0,y0;
		x0 = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);   //Kthe intersection point for x
		y0 = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);   //Kthe intersection point for y
		printf("The intersection point: (%3.2lf ", x0); printf(", %3.2lf", y0); puts(")");	
	}
	if((a1/a2 == b1/b2)||(a1/a2 == c1/c2))  //(Superposition) conflicting lines
	{
		if((a1/a2 == b1/b2)&&(a1/a2 != c1/c2))  //Parallel lines
		{
			puts("The lines are parallel!");
			double distance;
			distance = fabs(c1-c2) / sqrt(a1*a1 + b1*b1);
			printf("Distance in between two lines: %3.2lf\n", distance);
		}
		else
		{
			puts("The lines are conflict!");
		}
		
	}
	getch();
}
