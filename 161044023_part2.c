#include <stdio.h>
#include <math.h>

double calc_quadratic_eq_roots ( int a, int b, int c, int choice){
	double x = 0.0;
	double j = (b*b) - 4*a*c;
	if (choice == 0){
		x = (b*(-1) + sqrt(j)) / (2*a);
		return x; 
	}
	if(choice == 1)
		x = ((b)*(-1) - sqrt(j)) / (2*a);
		return x;
}

int main(){
	int a,b,c,choice;
	printf("a: ");
	scanf("%d", &a);
	printf("\nb: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	printf("\nchoice: ");
	scanf("%d", &choice);

	double result = calc_quadratic_eq_roots (a,b,c,choice);

	printf(" x = %lf\n", result);

}