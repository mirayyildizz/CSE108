#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void print_the_grid(int x_pos_ant, int y_pos_ant, int x_pos_nest, int y_pos_nest){
	int i, j;

	for(i = 0; i<=9; i++){
		for(j = 0; j<=9; j++){
			if( i == y_pos_ant && j == x_pos_ant){
				printf(" X ");
			}
			else if( i == y_pos_nest && j == x_pos_nest){
				printf(" O ");
			}
			else{
				printf(" . ");
			}
		}
			printf("\n");
	}

}


void create_grid(int x_pos_ant, int y_pos_ant, int x_pos_nest, int y_pos_nest, int movement){
	int i, j, tired = 0;

	do{
		printf("Please enter a movement: ");
	

		scanf("%d", &movement);

	if(movement == 4 && x_pos_ant - 1 > 0) {
		x_pos_ant = x_pos_ant - 1;
		tired = tired + 3;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 4 && x_pos_ant - 1 < 0){
		printf("Not allowed\n");
	}


	if(movement == 6 && x_pos_ant + 1 < 9){
		x_pos_ant = x_pos_ant + 1;
		tired = tired + 3;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 6 && x_pos_ant + 1 > 9){
		printf("Not allowed\n");
	}

	if(movement == 8 && y_pos_ant - 1 > 0){
		y_pos_ant = y_pos_ant - 1;
		tired = tired + 4;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 8 && y_pos_ant - 1 < 0){
		printf("Not allowed \n");
	}

	if(movement == 2 && y_pos_ant + 1 < 9){
		y_pos_ant = y_pos_ant + 1;
		tired = tired + 4;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 2 && y_pos_ant + 1 > 9){
		printf("Not allowed\n");
	}

	if(movement == 1 && x_pos_ant - 1 > 0 && y_pos_ant + 1 < 9){
		x_pos_ant = x_pos_ant - 1;
		y_pos_ant = y_pos_ant + 1;
		tired = tired + 5;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 1 && (x_pos_ant - 1 < 0 || y_pos_ant + 1 > 9)){
		printf("Not allowed\n");
	}


	if(movement == 3 && x_pos_ant + 1 < 9 && y_pos_ant + 1 < 9){
		x_pos_ant = x_pos_ant + 1;
		y_pos_ant = y_pos_ant + 1;
		tired = tired + 5;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}

	else if(movement == 3 && (x_pos_ant + 1 > 9 || y_pos_ant + 1 > 9)){
		printf("Not allowed\n");
	}

	if(movement == 7 && x_pos_ant - 1 > 0 && y_pos_nest - 1 > 0 ){
		x_pos_ant = x_pos_ant - 1;
		y_pos_ant = y_pos_ant - 1;
		tired = tired + 5;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);
	}
	else if (movement == 7 && (x_pos_ant - 1 < 0 || y_pos_nest - 1 < 0)) {
		printf("Not allowed\n");
	}
	if(movement == 9 && x_pos_ant + 1 < 9 && y_pos_nest - 1 > 0 ){
		x_pos_ant = x_pos_ant + 1;
		y_pos_ant = y_pos_ant - 1;
		tired = tired + 5;
		print_the_grid(x_pos_ant, y_pos_ant,x_pos_nest,y_pos_nest);

	}
	else if (movement == 9 && (x_pos_ant + 1 > 9 || y_pos_nest - 1 < 0)) {
		printf("Not allowed\n");
	}
 
 }
 while(!(x_pos_ant==x_pos_nest && y_pos_ant==y_pos_nest));
 printf("\n distance %d", tired);
}




int main(){
	int x_pos_nest, y_pos_nest, movement, x_pos_ant, y_pos_ant;
	srand(time(NULL));
	x_pos_nest = rand()%10;
	y_pos_nest = rand()%10;

	int i, j;
	x_pos_ant = 0;
	y_pos_ant = 0;


	


		create_grid(x_pos_ant, y_pos_ant, x_pos_nest, y_pos_nest, movement);
	

	return 0;
}