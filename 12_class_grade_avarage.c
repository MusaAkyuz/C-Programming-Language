/*
28.10.2020
By Musa Akyüz
learn to while code and see average how to calculate
*/

#include <stdio.h>

int main (void) // main called
{
	int grade, counter = 1, total , avarage;
	int howManyStudent;
	
	puts("How many student in your class ?");
	scanf("%d", &howManyStudent);
	
	while(counter <= howManyStudent)
	{
		printf("Enter %d. grade : ", counter);
		scanf("%d", &grade);
		total = total + grade;
		counter++;
	}	
	
	avarage = total / howManyStudent; //(total grade / student number)
	
	printf("Your class have %d student \n", howManyStudent);
	printf("Class grade avarage is %d", avarage);
	
	return 0;
}//end of main
