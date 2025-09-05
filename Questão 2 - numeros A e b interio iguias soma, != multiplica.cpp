#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, b, c;
		
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	system("cls");
	
	printf("Digite um numero: ");
	scanf("%d", &b);
	
	system("cls");
	
	if(a == b){
		c = a + b;
		printf("A + B = %d\n ", c);
	} else {
		c = a * b;
		printf("A x B = %d\n ", c);
	}
}