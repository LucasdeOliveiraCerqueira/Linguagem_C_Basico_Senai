#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jogo {
	char palavra[50];
	int acertos = 0;
};

int Palavras_Usuario (){
	int i, letra;
	
	for (i = 0; i < 6; i++){
		printf("Escolha uma letra: ");
		scanf("%s", letra);
		
		if (letra){
		}
	}
}

void verificacao (){
}

void acertos (){
}

void erros (){
	int tentativasRestantes = 6;
	tentativasRestantes--;
	
	if (tentativasRestantes = 0){
		printf("Numeros de tentativas esgotadas, GAME OVER.");
		
		exit(0);
	}
}

void palavra (){
}

int main (){
	Palavras_Usuario();
}