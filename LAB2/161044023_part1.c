/* The code that includes a function which is find the inverse of number */

#include<stdio.h>
int main(){
	int number, temp;
	printf("Enter a number");
	scanf("%d", &number);
	//temp = number;
	
	while(number>0){
		temp = number % 10;
		printf("%d",temp);
		number = number / 10;
	}
	return 0;
}
