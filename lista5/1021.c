/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1021
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
#include<math.h>
int main(){
	/*Declaracao de variaveis*/
	float valor, valor2;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m050 = 0, m025 = 0, m010 = 0, m005 = 0, m001 = 0;
	double temp;
	int sobra;

	/*Entrada do valor*/
	scanf("%f", &valor);
	
	/* calculo para pegar a quantidade de notas de 100*/
	valor2 = valor;
	n100 = valor2 / 100;
	temp = fmod(valor2, 100);
	sobra = temp * 100 + 1;

	/* calculo para pegar a quantidade de notas de 50*/
	valor2 = sobra;
	n50 = valor2 / 1000;
	temp = fmod(valor2, 1000);
	sobra = temp; 

	/*Verificacao para pegar as notas de 10 de acordo com o valor das notas de 50*/
	if (n50 > 5 || n50 < 5){
		while(n50 > 5){
			n10++;
			n50--;
		}
	
		while (n50 < 5 && n50 > 0){
			n10++;
			n50--;
		}
	} 
	
	if (n50 == 5){ 
		n50 = 1;
	}	

	/*Calculo para pegar as notas de 20 de acordo com as de 10*/
	n20 = n10 / 2;
	n10 %= 2;
	
	/* Calculo para pegar as notas de 5*/
	valor2 = sobra;
	n5 = valor2 / 100;
	temp = fmod(valor, 100);
 
 	/*Calculo para pegar as notas de 1 de acordo com as notas de 5*/
	if(n5 > 5 || n5 < 5){
    		while(n5 > 5){
        		m1++;
            		n5--;
        	}
        	while(n5 < 5 && n5 > 0){
            		m1++;
            		n5--;
        	}
	}
 
	if (n5 == 5){
    		n5 = 1;
    }
	
	/*Calculo para pegar as notas de 2 em relacao com as notas de 1*/
	n2 = m1 / 2;
	m1 %= 2;

	/*Preparacao da variavel "valor2", para poder pegar os numeros de moedas*/
    sobra = temp;
    valor2 = temp;
	valor2 -= sobra;
	valor2 *= 100; 
	valor2 = ceil(valor2);

	/*Pegas a quantidade de moedas de 50*/
	while(valor2 >= 50){
		m050++;
		valor2 -= 50;
	} 
	/*Pegas a quantidade de moedas de 25*/
	while(valor2 < 50 && valor2 >= 25){
		m025++;
		valor2 -= 25;
	}
	/*Pegas a quantidade de moedas de 10*/
	while(valor2 < 25 && valor2 >= 10){
		m010++;
		valor2 -= 10;
	}
	/*Pegas a quantidade de moedas de 5*/
	while(valor2 < 10 && valor2 >= 5){
		m005++;
		valor2 -= 5;
	}
	/*Pegas a quantidade de moedas de 1*/
	while(valor2 < 5 && valor2 >= 1){
		m001++;
		valor2 -= 1;
	} 

	/*Imprime os resultados*/
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m050);
	printf("%d moeda(s) de R$ 0.25\n", m025);
	printf("%d moeda(s) de R$ 0.10\n", m010);
	printf("%d moeda(s) de R$ 0.05\n", m005);
	printf("%d moeda(s) de R$ 0.01\n", m001);

	return 0;
}
