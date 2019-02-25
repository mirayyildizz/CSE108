/* Simple calculater*/
#include <stdio.h>

int addition(int value1, int value2){
	int result = value1 + value2;
	return result;
}

int subtraction(int value1, int value2){
	int result = value1 - value2;
	return result;
}
int multiplication(int value1, int value2){
	int result = value1 * value2;
	return result;
}
double division(int dividend, int divisor){
	double result = (double)dividend / (double)divisor;
	return result;
}
int power_of_two(int exponential){
	int result = 1;
	int i;
	for(i = 0; i<exponential; i++){
		result = 2*result;
	}
	return result;
}
int get_integer_from_user(){
	int number;
	scanf("%d", &number);
	return number;
}
char get_operation_type_from_user(){
	char op;
	scanf("%c", &op);
	return op;
}

int menu(int num1, int num2, int exp){
	printf("Please enter an operation = ");
	char operation = get_operation_type_from_user();
	if(operation == '+'){ 
		num1 = get_integer_from_user();
		num2 = get_integer_from_user();
		printf("%d", addition(num1, num2));
	}
	if(operation == '-'){
		num1 = get_integer_from_user();
		num2 = get_integer_from_user();
		printf("%d",subtraction(num1, num2));
	}
	if(operation == '/'){
		num1 = get_integer_from_user();
		num2 = get_integer_from_user();
		printf("%lf",division(num1, num2));
	}
	if(operation == '*'){
		num1 = get_integer_from_user();
		num2 = get_integer_from_user();
		printf("%d",multiplication(num1, num2));
	}
	if(operation == 'p'){
		exp = get_integer_from_user();
		printf("%d",power_of_two(exp));
	}

}

int main(){
	int num1, num2, exp;
	menu(num1,num2,exp);

	return 0;

}
