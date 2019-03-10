/* Write a following function that calculates whether a student can take a make-up exam or not. You must take midterm, final and 
absenteeism values from user in a for loop. The average must be calculated first. For this, 40% of the midterm exam and 60% of the 
final exam grade must be collected. Students whose averages are higher than 59.5 or absenteesim hihgher than 80% are not allowed to
take the make-up exam.
*/

#include <stdio.h>

void makeup_exam(int midterm, int final, int absenteeism){
	double mid = 0, fin = 0, abs = 0, sum = 0;
	mid = midterm * 0.4;
	fin = final * 0.6;

	sum = mid + fin;
	printf("SUM: %lf\n", sum );

	if(sum > 59.5 || absenteeism > 80 ){
		printf("Not Allowed\n");
	}
	else{
		printf("Allowed\n");
	}
	
}


int main(){
	int midterm, final, absenteeism;

	for(int i = 0; i<3; i++){
		printf("Enter a midterm: ");
		scanf("%d", &midterm);
		printf("Enter a final: ");
		scanf("%d", &final);
		printf("Enter a absenteeism: ");
		scanf("%d", &absenteeism);
		makeup_exam(midterm,final,absenteeism);
	}
	
	return 0;
}
