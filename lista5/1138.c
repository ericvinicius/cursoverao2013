/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1138
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declarao de Variaveis*/
	int a, b, cont[11], res, a2;

	/*Leitura do teclado*/
	scanf("%d %d", &a, &b);
	a2 = a;

	/*Laco para verificar parada*/
	while(a != 0 && b != 0){
		cont[0] = 0;
		cont[1] = 0;
		cont[2] = 0;
		cont[3] = 0;
		cont[4] = 0;
		cont[5] = 0;
		cont[6] = 0;
		cont[7] = 0;
		cont[8] = 0;
		cont[9] = 0;

		/*Lacos para guardar a contagem de digitos*/
		for( ; a <= b; a++){
			a2 = a;

			while(a2 > 0){

				res = a2 % 10;
				a2 /= 10;

				if(res == 0){
					cont[0]++;
				} else if(res == 1){
					cont[1]++;
				} else if(res == 2){
					cont[2]++;
				} else if(res == 3){
					cont[3]++;
				} else if(res == 4){
					cont[4]++;
				} else if(res == 5){
					cont[5]++;
				} else if(res == 6){
					cont[6]++;
				} else if(res == 7){
					cont[7]++;
				} else if(res == 8){
					cont[8]++;
				} else {
					cont[9]++;
				}
			}	
		}
		/*Impressao dos resultados*/
		printf("%d %d %d %d %d %d %d %d %d %d\n", cont[0], cont[1], cont[2], cont[3], cont[4], cont[5], cont[6], cont[7], cont[8], cont[9]);

		scanf("%d %d", &a, &b);
		a2 = a;
	}	
	return 0;
}
