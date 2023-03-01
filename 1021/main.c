#include<stdio.h>

int main(){
	int reais, centavos;
	while(scanf("%d.%d", &reais, &centavos) != EOF){
		//printf("reais: %d\ncenvatos: %d\n", reais, centavos);
		printf("NOTAS:\n");
		int notas = 0;
		notas = reais/100;
		reais -= notas*100;
		printf("%d nota(s) de R$ 100.00\n", notas);
		notas = reais/50;
		reais -= notas*50;
		printf("%d nota(s) de R$ 50.00\n", notas);
		notas = reais/20;
		reais -= notas*20;
		printf("%d nota(s) de R$ 20.00\n", notas);
		notas = reais/10;
		reais -= notas*10;
		printf("%d nota(s) de R$ 10.00\n", notas);
		notas = reais/5;
		reais -= notas*5;
		printf("%d nota(s) de R$ 5.00\n", notas);
		notas = reais/2;
		reais -= notas*2;
		printf("%d nota(s) de R$ 2.00\n", notas);
		//printf("sobraram: %d reais\n", reais);

		printf("MOEDAS:\n");
		int moedas = 0;
		centavos += 100*reais;
		moedas = centavos/100;
		centavos -= moedas*100;
		printf("%d moeda(s) de R$ 1.00\n", moedas);
		moedas = centavos/50;
		centavos -= moedas*50;
		printf("%d moeda(s) de R$ 0.50\n", moedas);
		moedas = centavos/25;
		centavos -= moedas*25;
		printf("%d moeda(s) de R$ 0.25\n", moedas);
		moedas = centavos/10;
		centavos -= moedas*10;
		printf("%d moeda(s) de R$ 0.10\n", moedas);
		moedas = centavos/5;
		centavos -= moedas*5;
		printf("%d moeda(s) de R$ 0.05\n", moedas);
		printf("%d moeda(s) de R$ 0.01\n", centavos);
	}

}

