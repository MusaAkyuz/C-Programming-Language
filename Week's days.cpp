#include <stdio.h> //input output library is added

int main () //main function is called
{
printf("Write a integer number about day 1-7 \n"); //Write on screen
int number;
scanf("%d",&number); //request number from user

switch(number) //selection about user's number
{
	case 1 : printf("Monday \n");
		break;                        //break: if number is 1 program stops here 
	case 2 : printf("Tuesday \n");
		break;
	case 3 : printf("Wednesday \n");
		break;
	case 4 : printf("Thursday \n");
		break;                        //break: if number is 4 program stops here (exp.)
	case 5 : printf("Friday \n");
		break;
	case 6 : printf("Saturday \n");
		break;
	case 7 : printf("Sunday \n");
		break;
	default : printf("Invalid number \n");
}
}
