/*
 *  Introducao a Programacao - VERAO 2013 - IME - USP
 *  Prof. Neuton de Oliveira Braga Jr
 *  2 Prova
 * 
 *  Resolucao da Questao <Coloque o codigo da questao, ex, Pxx>
 *  Aluno: Eric Vinicius Camargo de Campos
 *  Turma: Manha
 */

#include <stdio.h>

/* Inclua a biblioteca math.h, se for usa-la */

/* Declare funcoes se for necessario */
double raiz(double d){
    double x;
    double j = 0;
    double diferenca_anterior = d;
    
    for(x = 1; x <= d; x = x + 0.01){
        
        double diferenca = d - (x*x);
        diferenca *= (diferenca < 0.0) ? -1 : 1;
        
        if(diferenca_anterior < diferenca ){
            break;
        }
        
        j = x;
        diferenca_anterior = diferenca;
    }
    
    return j;
}


int main() {
    
    double xa, ya, d1, d2, mais, menos;
	int i = 1;
	d2 = 0;
	
	while(1){
		printf("Digite o ponto %d. (Digite 0 0 para terminar): ", i);
		scanf("%lf %lf", &xa, &ya);
        
		if(xa == 0 && ya == 0){
			break;
		}
        
		d1 = ((0 - xa) * (0 - xa)) + ((0 - ya) * (0 - ya));
        
		if (d1 > d2){
			mais = raiz(d1);
			menos = raiz(d2);
		} else {
			mais = raiz(d2);
			menos = raiz(d1);
		}
        
		d2 = d1;
		i++;
        
	}
    
	printf("O ponto mais longe eh: %f \n", mais);
	printf("O ponto mais perto eh: %f \n", menos);
    
    
    return 0;
}