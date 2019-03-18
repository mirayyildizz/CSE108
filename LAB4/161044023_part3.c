 #include<stdio.h>

typedef enum{
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun
} day_t;

typedef enum{
	Jan,
	Feb,
	Mar,
	Apr,
	May,
	June,
	July,
	Aug,
	Sept,
	Oct,
	Nov,
	Dec
} month_t;

typedef enum{
	y_2019,
	y_2020,
	y_2021,
} year_t;


int calc_date(int n, int *dm, day_t *d, month_t *m, year_t *y){

	int y_number = n / 360;
	int m_number = n / 30;
	if( m_number >= 12){
		m_number = m_number % 12;
	}
	*dm = n % 30;
	*d = n % 7 + *d;
	if( *d >= 7){
		*d = *d % 7;
	}

	*y = y_number + 2019;
	*m = m_number;


}


int main(){
	day_t d = 1 ;
	month_t m = Jan;
	year_t y = y_2019;
	int dm = 2;
	int n;
	scanf("%d", &n);

	calc_date(n, &dm, &d, &m, &y);

	if(d  == 0){
		printf("MONDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if (d == 1)
	{
		printf("TUESDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if(d == 2){
		printf("WEDNESDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if (d  == 3)
	{
		printf("THURSDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if(d == 4){
		printf("FRİDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if (d == 5)
	{
		printf("SATURDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}
	if(d == 6){
		printf("SUNDAY\n");
		printf("dm = %d\n", dm );
		printf("m = %d\n", m );
		printf("y = %d\n",y );
	}

}


