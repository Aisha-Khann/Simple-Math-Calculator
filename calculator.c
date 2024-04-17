#include <stdio.h>

int main () {

	float number1;
	char operator;
	float number2;
	float result;

	printf("Welcome to a basic calculator \n");
	printf("Enter an operator ('+' '-' '*' '/':\n");
	scanf("%c", &operator);

	if (operator != '+'&&operator!='-'&&operator!='*'&&operator!='/'){
	printf("Invalid operator\n");
	}
	else {
	printf("Enter number 1: \n");
	scanf("%f", &number1);

	printf("Enter number 2: \n");
	scanf("%f", &number2);
	
	if (operator=='+') {
	result=number1+number2;
	}
	else if (operator=='-') {
	result=number1-number2;
	}
	else if (operator=='*') {
	result=number1*number2;
	}
	else if (operator=='/') {
		if (number2==0){
			printf("Cannot divide by 0.\n");
			return 0;
		}
	result=number1/number2;
	}
	printf("Your result is: %.2f \n",result);
}
	return 0;
}

