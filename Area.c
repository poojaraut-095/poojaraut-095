#include <stdio.h>
int main(){
	
	float b,h,area;
	
	printf("Enter base and height");
	scanf("%f%f",&b,&h);
	area= 0.5*b*h;
	printf("\n Area of triangle is %f",area);
	return 0;
}
