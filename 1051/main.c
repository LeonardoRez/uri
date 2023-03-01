#include<stdio.h>

int main(){
	int reais, centavos;
	int a = 1000;
	int b = 0;
	while(scanf("%d.%d", &reais, &centavos) != EOF ){
		//printf("entrada: R$%d.%02d\n", reais, centavos);
		int total = reais*100 + centavos;
		int f2=0,f3=0,f4=0;
		f2 = total - 200000;
		if(f2 < 0){
			printf("Isento\n");
		}else{
			if(f2 > 100000){
				f2 = 100000;
				f3 = total - 300000;
			}
			if(f3 > 150000){
				f3 = 150000;
				f4 = total - 450000;
			}
			int imposto = 0;
			imposto += (f2*8)/100;
			imposto += (f3*18)/100;
			imposto += (f4*28)/100;
			printf("R$ %d.%02d\n", (imposto/100), (imposto%100));
		}

	}

}

