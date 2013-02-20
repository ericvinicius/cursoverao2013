#include<stdio.h>
#include<stdlib.h>
int calculaTempo(int inicial, int final, int base, int atual, int proximo){
	int cont;

	if(inicial > final){

		for(cont = 0; inicial != final; inicial++){
			if(inicial >= base){
				inicial = 1;
				proximo++;
			}
			cont++;
		}
		atual++;

	} else {

		for(cont = 0; inicial < final; inicial++){
			cont++;
		}

		atual = cont;
	}

	return atual;

}

int main(){
	char str[10], descartavel;
	int diaIni, horaIni, minutoIni, segundoIni;
	int diaFim, horaFim, minutoFim, segundoFim;
	int dias = 0, horas = 0, minutos = 0, segundos = 0, cont = 0;

	scanf("%s %d", &str[0], &diaIni);
	scanf("%d %c %d %c %d", &horaIni, &descartavel, &minutoIni, &descartavel, &segundoIni);

	scanf("%s %d", &str[0], &diaFim);
	scanf("%d %c %d %c %d", &horaFim, &descartavel, &minutoFim, &descartavel, &segundoFim);

	dias = diaFim - diaIni;

	segundos = calculaTempo(segundoIni, segundoFim, 60, segundos, minutos);

	minutos = calculaTempo(minutoIni, minutoFim, 60, minutos, horas);

	horas = calculaTempo(horaIni, horaFim, 24, horas, dias)

	printf("%d dia(s)\n", dias);
	printf("%d hora(s)\n", horas);
	printf("%d minuto(s)\n", minutos);
	printf("%d segundo(s)\n", segundos);

	return 0;
}