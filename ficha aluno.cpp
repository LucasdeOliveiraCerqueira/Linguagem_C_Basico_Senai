#include <stdio.h>
#include <stdlib.h>

struct FichaAluno {
	char nome[50];
	char disciplina[30];
	float nota1;
	float nota2;
};

int main(){
	struct FichaAluno aluno1, aluno2;
	
	printf("Informe o nome do aluno 1: ");
	scanf("%r", &aluno1.nome);
	
	printf("Informe a disciplina do aluno 1: ");
	scanf("%r", &aluno1.disciplina);
	
	printf("Informe a nota 1 do aluno 1: ");
	scanf("%f", &aluno1.nota1);
	
	printf("Informe a nota 2 do aluno 1: ");
	scanf("%f", &aluno1.nota2);
	
	system("cls");
	
	printf("Aluno 1: \n");
	printf("Nome: %s \n", aluno1.nome);
	printf("Disciplina: %s \n", aluno1.disciplina);
	printf("Nota 1: %.2f \n", aluno1.nota1);
	printf("Nota 2: %.2f \n", aluno1.nota2);
}