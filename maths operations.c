#include <stdio.h>

int main(){
	
	int num1,num2,sum,sub,mul,div;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum = num1+ num2;
	sub = num1-num2;
	mul= num1*num2;
	div=(float)num1/num2;
	printf("\n Addition of %d and %d is %d",num1,num2,sum);
	printf("\n Substraction of %d and %d is %d",num1,num2,sub);
	printf("\n Multiplication of %d and %d is %d",num1,num2,mul);
	printf("\n Division of %d and %d is %.2f",num1,num2,div);
	return 0;
	}
