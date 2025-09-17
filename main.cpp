#include <stdio.h>
#include <stdlib.h>

int code = 0;

struct Produto{
	char nome[50];
	float preco;
	int quantidade, codigo;
};

Produto produtos [20];

int cadrastro(){
	if (code >= 20){
		printf("A quantidade de produtos cadrastados atingiu o limite! ");
	} else {
		printf("Qual é o nome do produto? ");
		scanf("%s", produtos[code].nome);
		
		printf("Qual é o valor do produto? ");
		scanf("%f", produtos[code].preco);
		
		printf("Qual é a quantidade do produto? ");
		scanf("%d", produtos[code].quantidade);
		
		printf("Qual é o codigo do produto? ");
		scanf("%d", produtos[code].codigo);
		
		code++;
	}
}

void busca(){
	int id;
	
	printf("Qual é o codigo do produto? ");
	scanf("%d", &id);
	
	for(int i = 0; i < code; i++){
		if (produtos[i].codigo == id){
			printf("Nome do produto: %s \n Valor do produto: %f \nQuantidade do produto: %d", produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
		}
	}
	printf("Codigo invalido!");
}

int direcao(int menu){
	
	switch (menu){
		case 1: 
			cadrastro();
			break;
		case 2: 
			busca();
			break;
		case 3:
			break;
		default:
			printf("Operacao invalida!");
	}
}

int main(){
	int menu; 
	
	do {		
		printf("Digite: \n(1) Cadrastar \n(2) buscar o produto \n(3) Exit \nQual voce deseja? ");
		scanf("%d", &menu);
		
		system("cls");	
		
		direcao(menu);	
	} while(menu != 3);
}