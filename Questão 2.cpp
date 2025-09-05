#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float a, b, resultado;
	char op;
	
	printf("Informe um numero: ");
	scanf("%f", &a);
	
	system("cls");
	
	fflush(stdin); // para não dar bug na hora de inserir qualquer caracter dentro de um variavel que ler um texto.
	printf("Informe a operacao: ");
	scanf("%c", &op);
	
	system("cls");
	
	printf("Informe um numero: ");
	scanf("%f", &b);
	
	system("cls");
	
	switch(op){
		case '+':
			resultado = a + b;
			break;
		case '-':
			resultado = a - b;
			break;
		case '*':
			resultado = a * b;
			break;
		case '/':
			resultado = a / b;
			break;
	}
	
	system("cls");
	
	printf("resultado: %.2f", resultado);
}