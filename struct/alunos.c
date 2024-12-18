#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct aluno{
	char nome [100];
	int matricula;
	float IRA;
}student;

void imprime(student * aluno, int qnt_alunos){
	int j;
	for(j=0;j<qnt_alunos;j++){
		printf("Nome do aluno: \n", vetor_alunos[j]);
		printf("Matricula do aluno: \n", vetor_alunos[j].matricula);
		printf("IRA do aluno: \n", vetor_alunos[j].IRA);
	}
}

int main (void){
	setlocale(LC_ALL, "portuguese");
	int qnt_alunos;
	int index;
	printf("Quantos alunos deseja cadastrar: \n");
	scanf("%d", &qnt_alunos);
	student * vetor_alunos = (student*) malloc(qnt_alunos*sizeof(student));
	if (vetor_alunos==NULL){
		printf("ERRO");
		exit(1);
	}
	for(index=0;index<qnt_alunos;index++){
		printf("digite o nome %d° aluno: \n", index+1);
		scanf("% [^\n]s", vetor_alunos[index]);
		printf("digite a matricula: \n");
		scanf("%d", &vetor_alunos[index].matricula);
		printf("digite o IRA: \n");
		scanf("%f", &vetor_alunos[index].IRA);
	}
	imprime(vetor_alunos, qnt_alunos);
	
	free(vetor_alunos);
	
	return 0;
}
