#include<stdio.h>

int main(){
	long double sum = 0;
	long double i=1.0, j=1.0;
	while(j <= 39){
		sum += j/i;
		i *= 2.0;
		j += 2.0;
	}
	printf("%.2Lf\n", sum);
}

