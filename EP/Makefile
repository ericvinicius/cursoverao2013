# regra default, para compilar tudo
all: batalhanaval

# o programa Ž feito de v‡rios arquivos fontes
batalhanaval: batnaval.o gerador_navio.o impressao_matriz.o
	gcc batnaval.o gerador_navio.o impressao_matriz.o -o batalhanaval

# regra para o arquivo "batalhanaval.o".
batnaval.o: batnaval.c batnaval.h gerador_navio.h impressao_matriz.h
	gcc -g -Wall -ansi -pedantic -c batnaval.c

# regra para o arquivo "gerador_navio.o".
gerador_navio.o: gerador_navio.c gerador_navio.h
	gcc -g -Wall -ansi -pedantic -c gerador_navio.c
	
# regra para o arquivo "impressao_matriz.o".
impressao_matriz.o: impressao_matriz.c impressao_matriz.h
	gcc -g -Wall -ansi -pedantic -c impressao_matriz.c
	
# Limpando tudo o que foi gerado automaticamente
clean:
	rm -f batalhanaval batnaval.o gerador_navio.o impressao_matriz.o
