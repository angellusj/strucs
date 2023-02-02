#include<stdio.h>
#include<stdlib.h>

//função para criar matriz de float:

float ** criaMatrizFloat(int linhas, int colunas){
	float ** matriz = (float**) malloc (linhas*sizeof(float*));
	int linha;
	for(linha=0;linhas<linhas;linha++){
		matriz[linha]= (float*) malloc(colunas*sizeof(float));
	}
	return matriz;
}

int main(void){
	int linhas = 2;
	int colunas = 2;
	float ** matriz = criaMatrizFloat(2,2);
	int i, j;
	printf("digite os valores da matriz:");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	for(i=0;i<linhas;i++){
		free(matriz[i]);
	}
	free(matriz);
	return 0;
}
