#include <stdio.h>
#include <stdlib.h>


 main(){
 	char nome[20];
 	int idade, genero; // 1 para homem, 0 pra mulher
 	
 	printf("Nome: \n");
 	scanf("%s",&nome);
 	printf("Idade: \n");
 	scanf("%d", &idade);
 	printf("Genero: (1 para homem e 0 para mulher\n");
 	scanf("%d",&genero);
 	
 	if (genero==0){
 		printf("Nome: %s, Idade: %d anos, Mulher", nome,idade);
 	}
 	if (genero==1){
 		if (idade<18){
 			printf("Nome: %s, Idade: %d anos, Homem", nome, idade);
 		}else{
 			printf("Nome: %s, Idade: %d anos, Homem, ALISTAR", nome,idade);
 		}
 	}
 	
 		
 	}
