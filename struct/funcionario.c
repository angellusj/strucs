#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
	char nome[100];
	float salario;
	int identificador;
	char cargo[100];
}funcio;

void recebe(funcio *pp){
	
	
}

void imprime(funcio * funcionario, int ){
	
}

int main (void){
	int qnt_funcionario;
	int index;
	printf("Informe a quantidade de funcionarios selecionados: \n");
	scanf("%d", &qnt_funcionario);
	funcio * vetor_func = (funcio*) malloc (qnt_funcionario*sizeof(funcio));
	if(vetor_func==NULL){
		printf("ERRO");
		exit(1);
	}
	for(index=0;index<qnt_funcionario;index++){
	
	printf("Informe o nome do funcionario: \n");
	scanf("% [^\n]", vetor_func[index].nome);
	printf("Informe o salario do funcionario: \n");
	scanf("%f", vetor_func[index].salario);
	printf("Informe o identificador do funcionario: \n");
	scanf("%d", vetor_func[index].identificador);
	printf("Informe o cargo do funcionario: \n");
	scanf("% [^\n]s", vetor_func[index].cargo);
    }
    
	return 0;
}
