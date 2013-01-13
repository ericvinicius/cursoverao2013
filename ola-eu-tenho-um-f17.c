#include<stdio.h>
int main(){
	int direcao;
	int cont = 1;
	int vida = 1;
	printf("Este e o meu F17.\n");

	printf("|                                |\n");
	printf("|                                |\n");
	printf("|                                |\n");
	printf("|                                |\n");
	printf("|                                |\n");
	printf("|                                |\n");
	printf("|     /\\                         |\n");
	printf("|    /<>\\                        |\n");
	printf("|   /=  =\\                       |\n");
	printf("|  / /\\/\\ \\                      |\n");
	printf("|  \\/ /\\ \\/                      |");

	while(vida>0){
		while(cont>0){
			scanf("%d",&direcao);
			cont--;
		}
		if(direcao==2){
			printf("|                                |\n");
	        	printf("|                                |\n");
        		printf("|                                |\n");
        		printf("|                                |\n");
	         	printf("|                                |\n");
        	 	printf("|                                |\n");
			printf("|               /\\               |\n");
	         	printf("|              /<>\\              |\n");
        	 	printf("|             /=  =\\             |\n");
        		printf("|            / /\\/\\ \\            |\n");
	 	        printf("|            \\/ /\\ \\/            |");
			scanf("%d",&direcao);

		}if(direcao==3){
			printf("|                                |\n");
	                printf("|                                |\n");
        	        printf("|                                |\n");
                	printf("|                                |\n");
	                printf("|                                |\n");
        	        printf("|                                |\n");
                	printf("|                         /\\     |\n");
	                printf("|                        /<>\\    |\n");
        	        printf("|                       /=  =\\   |\n");
                	printf("|                      / /\\/\\ \\  |\n");
	                printf("|                      \\/ /\\ \\/  |");

			scanf("%d",&direcao);
			if(direcao==3){
				printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("|                                 |\n");
				printf("|                                 |\n");
                                printf("|                             X * |\n");
                                printf("|                              \\  |\n");
                                printf("|                             * \\ |\n");
                                printf("|                           X----X|\n");
                                printf("|                          *  * / |\n");
                                printf("|                              X  |\n\n");
			printf("GAME OVER\n");
	
			return 0;
			}
		}if(direcao==1){
			printf("|                                |\n");
		        printf("|                                |\n");
			printf("|                                |\n");
			printf("|                                |\n");
			printf("|                                |\n");
		        printf("|                                |\n");
	        	printf("|     /\\                         |\n");
			printf("|    /<>\\                        |\n");
			printf("|   /=  =\\                       |\n");
			printf("|  / /\\/\\ \\                      |\n");
			printf("|  \\/ /\\ \\/                      |");
			
			scanf("%d",&direcao);
			if(direcao==1){
                         	printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("|                                 |\n");
                                printf("| *  X                            |\n");
                                printf("|  /                              |\n");
                                printf("| / *                             |\n");
                                printf("|X----X                           |\n");
	                        printf("|*\\ *                             |\n");
                        	printf("|  X                              |\n\n");
			printf("GAME OVER\n\n");
   
                        return 0;
                        }
		}
	}
	printf("GAME OVER");
	return 0;
}
