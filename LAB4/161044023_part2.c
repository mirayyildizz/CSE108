#include<stdio.h>
#include<math.h>

void calc_roots(int a, int b, int c, double *root1, double *root2){

	double num = (b*b - 4*a*c);
	*root1 = ((-1)*b + sqrt(num)) / (2*a);
	*root2 = ((-1)*b - sqrt(num)) / (2*a);

}

int main()
{
	int a, b, c;
	double root1 = 0, root2 = 0;
	printf("a = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	printf("\nc = ");
	scanf("%d", &c);

	calc_roots(a,b,c, &root1, &root2);

	printf("root1 = %lf, root2 = %lf ", root1, root2);



	return 0;
}