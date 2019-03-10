#include<stdio.h>

void find_prime_numbers(int number){
	int counter = 0, counter2 = 0;
 	for (int i = 1; i < number; ++i)
 	{
 		for (int k = 1; k <= i; ++k)
 		{
 			if(i % k == 0)
 				counter++;
 		}
 		if(counter == 2){
 			printf("%d ", i);
 			counter2++;
 		}
 		counter = 0;

 	}
 	printf("\nThere are %d prime numbers which are smaller than %d", counter2, number);
 }


int main()
{
	int number;
	printf("Please enter a number to find prime numbers that are smaller than the number: ");
	scanf("%d", &number);
	find_prime_numbers(number);

	return 0;
}