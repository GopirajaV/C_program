#include <stdio.h>
int options()
{
	int num;
	printf("Press 1 to calculate area of square\nPress 2 to calculate area of rectangle\nPress 3 to calculate area of Circle\nPress 0 to Exit Program..!\nEnter the Choice:");
	scanf("%d", &num); 
	return (num);
}
int SquareArea(){
	float num;
	printf("Enter side of square:\n");
	scanf("%f",&num);
	printf("Area of square= %f\n",num*num);
}
int RectArea(){
	float a, b;
	printf("Enter length and breadth:\n");
	scanf("%f %f",&a,&b);
	printf("Area of square= %f\n",a*b);
}
int CircleArea(){
	float radius;
	printf("Enter Radius of the circle:\n");
	scanf("%f",&radius);
	printf("Area of circle= %f\n",3.14*radius*radius);
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
	return 0;
} 