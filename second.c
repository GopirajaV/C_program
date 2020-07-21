#include <stdio.h>
int options()
{
	int num;
	printf("Press 1 to calculate area of square\nPress 2 to calculate area of rectangle\nPress 3 to calculate area of Circle\nEnter the Choice:");
	scanf("%d", &num); 
	return (num);
}
int operations(int a){
	int input;
	switch (a) {
	case 1: {
		SquareArea();
		input =options();
		operations(input);
		break; 
	} 
	case 2: { 
		RectArea();
		input =options();
		operations(input);
		break; 
	} 
	case 3: { 
		CircleArea();
		input =options();
		operations(input); 
		break; 
	} 
	case 0:{
		return 0;
		break;
	}
	default: 
		printf("wrong Input\n"); 
		input =options();
		operations(input);
		break;
	} 
}
int main()
{ 
	float result; 
	int choice;
	choice =options();
	operations(choice);
} 