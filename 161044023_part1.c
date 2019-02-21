/*Program which find area of the sphere*/
#include<stdio.h>
#define PI 3.14

int main(){
	int r;
	double area;
	printf("r = ");
	scanf("%d", &r);
	area = 4 * PI * r * r;
	printf("Area of sphere: %lf", area);

	return 0;
}
