#include<stdio.h>

void get_min_max(int *min, int *max){
	int n1, n2, n3;
	printf("Input: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 > n2 && n1 > n3){
		*max = n1;
	}
	if(n1 < n2 && n1 < n3){
		*min = n1;
	}
	if(n2 > n1 && n2 > n3){
		*max = n2;
	}
	if(n2 < n1 && n2 < n3){
		*min = n2;
	}
	if(n3 > n1 && n3 > n2){
		*max = n3;
	}
	if(n3 < n1 && n3 < n2){
		*min = n3;
	}

}



int main(){
	int min = 0;
	int max = 0;

	get_min_max(&min, &max);

	printf("Min: %d, ", min);
	printf("Max: %d, ", max);

	double average = (max + min) / 2;

	printf("Average: %lf ", average ); 

}