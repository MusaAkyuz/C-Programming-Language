// Collection
#include <stdio.h> // input output library is added

int main () // main function is called
{
	int number1 = 5; // 5 are assigned to number1
	float number2 = 2.1; // 2.5 are assigned to number2
	double number3 = 2.154; // 2.154 are assigned to number3
	
	printf(" Integer : 5\n Float : 2.1\n Double : 2.154\n"); // written on screen
	
	int sum1;                                                      // sum1 is assigned to number1 + number1
	sum1 = number1 + number1;
	printf(" Two integer number : %d",sum1);                       // sum1 is written on the screen
	
	float sum2;                                                    // sum2 is assigned to number1 + number2
	sum2 = number1 + number1;
	printf("\n Two integer number : %f",sum2);                     // sum2 is written on the screen
	
	float sum3;                                                    // sum3 is assigned to number1 + number2
	sum3 = number1 + number2;
	printf("\n One integer one float number : %f",sum3);           // sum3 is written on the screen
	
	float sum4;                                                    // sum4 is assigned to number1 + number2
	sum4 = number1 + number2;
	printf("\n One integer one float number : %2.4f",sum4);        // sum4 is written on the screen
	 
	double sum5;                                                   // sum5 is assigned to number1 + number3
	sum5 = number1 + number3;
	printf("\n One integer one double number : %f",sum5);          // sum5 is written on the screen
	
	double sum6;                                                   // sum6 is assigned to number2 + number3
	sum6 = number2 + number3;
	printf("\n One float one double number : %f",sum6);            // sum6 is written on the screen
	
	double sum7;                                                   // sum7 is assigned to number2 + number3
	sum7 = number2 + number3;
	printf("\n Two double number : %f",sum7);                      // sum7 is written on the screen
	
	return 0; // finish program
}
