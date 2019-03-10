/* The codes that computes letter grade of averages notes. You must take midterm and final notes from user. Calculate average of notes.
(40% midterm 60% final) 
*/

#include <stdio.h>

char letter_grade(int midterm, int final){
	double mid = 0, fin = 0, abs = 0, sum = 0;
	char a = 'A', b = 'B', c = 'C', d = 'D', f = 'F' ;
	mid = midterm * 0.4;
	fin = final * 0.6;

	sum = mid + fin;

	if(sum>=90)
		return a;
	if(sum>=80 && sum<90)
		return b;
	if(sum>=70 && sum<80)
		return c;
	if(sum>=60 && sum<70)
		return d;
	if(sum<=60)
		return f;

}

int main(){
	int midterm = 0, final = 0;
	printf("Enter a midterm: ");
	scanf("%d", &midterm);
	printf("Enter a final: ");
	scanf("%d", &final);
	printf("%c \n",letter_grade(midterm,final));
	printf("Enter a midterm: ");
	scanf("%d", &midterm);
	printf("Enter a final: ");
	scanf("%d", &final);
	printf("%c \n",letter_grade(midterm,final));
	printf("Enter a midterm: ");
	scanf("%d", &midterm);
	printf("Enter a final: ");
	scanf("%d", &final);
	printf("%c",letter_grade(midterm,final));
}
